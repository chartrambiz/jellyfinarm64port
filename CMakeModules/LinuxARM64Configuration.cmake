# ARM64/Raspberry Pi specific configuration for Linux
# Include this file after LinuxConfiguration.cmake for ARM64 builds

message(STATUS "ARM64/Raspberry Pi configuration enabled")

# Force ARM64 architecture
set(CMAKE_SYSTEM_PROCESSOR "aarch64")

# Enable OpenGLES instead of desktop OpenGL for ARM
set(OPENGLES_FOUND TRUE)
set(OPENGLES_LIBRARY "GLESv2")
set(OPENGLES_INCLUDE_DIR "/usr/include")

# Look for EGL for GPU acceleration
find_package(EGL REQUIRED)
if(EGL_FOUND)
    message(STATUS "EGL found - GPU acceleration available")
    set(OPENGL_LIBS ${OPENGLES_LIBRARY} EGL)
else()
    message(WARNING "EGL not found - limited GPU acceleration")
    set(OPENGL_LIBS ${OPENGLES_LIBRARY})
endif()

# Try to find VAAPI for hardware decoding (Intel/AMD)
find_package(VAAPI)
if(VAAPI_FOUND)
    message(STATUS "VAAPI found - hardware decoding available")
    add_definitions(-DHAVE_VAAPI)
else()
    message(STATUS "VAAPI not found - will use software decoding")
endif()

# Try to find V4L2 for camera/hardware decoding
find_package(V4L2)
if(V4L2_FOUND)
    message(STATUS "V4L2 found - video4linux acceleration available")
    add_definitions(-DHAVE_V4L2)
else()
    message(STATUS "V4L2 not found")
endif()

# Raspberry Pi specific: check for MMAL/Broadcom libs
find_library(BROADCOM_LIBS bcm_host PATHS /opt/vc/lib NO_DEFAULT_PATH)
if(BROADCOM_LIBS)
    message(STATUS "Broadcom/MMAL libs found - Raspberry Pi GPU available")
    set(RPI_LIBS ${BROADCOM_LIBS})
    add_definitions(-DTARGET_RPI=1)
else()
    message(STATUS "Broadcom libs not found - generic ARM64 build")
    set(RPI_LIBS "")
endif()

# Enable Wayland support if available
find_package(Wayland REQUIRED COMPONENTS Client)
if(Wayland_FOUND)
    message(STATUS "Wayland found")
    set(QT_QPA_PLATFORM "wayland" CACHE STRING "Qt platform")
else()
    find_package(X11)
    if(X11_FOUND)
        message(STATUS "X11 found as fallback")
        set(QT_QPA_PLATFORM "xcb" CACHE STRING "Qt platform")
    else()
        set(QT_QPA_PLATFORM "linuxfb" CACHE STRING "Qt platform")
    endif()
endif()

# MPV configuration for ARM
# Prefer v4l2m2m-copy hardware decoder on Raspberry Pi
set(MPV_HWDEC_OPTIONS "v4l2m2m-copy,vaapi,default" CACHE STRING "MPV hwdec order for ARM")
message(STATUS "MPV hwdec options: ${MPV_HWDEC_OPTIONS}")

# Disable SSE/SSE2 optimizations that don't work on ARM
if(CMAKE_CXX_FLAGS MATCHES "-march=native")
    string(REPLACE "-march=native" "-march=armv8-a+crc+crypto" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
endif()

# Add ARM-specific compiler flags
enable_if_supported(COMPILER_FLAGS "-mfpu=neon")
enable_if_supported(COMPILER_FLAGS "-ffast-math")
enable_if_supported(COMPILER_FLAGS "-funsafe-math-optimizations")

message(STATUS "ARM64 configuration complete")
