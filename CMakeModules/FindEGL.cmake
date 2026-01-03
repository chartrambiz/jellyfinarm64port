# Find EGL (OpenGL ES Extension)
# This module is for ARM64 systems that need OpenGL ES

find_package(PkgConfig QUIET)

if(PKG_CONFIG_FOUND)
    pkg_check_modules(PC_EGL QUIET egl)
endif()

find_library(EGL_LIBRARY
    NAMES EGL
    HINTS ${PC_EGL_LIBRARY_DIRS} /usr/lib/aarch64-linux-gnu /usr/lib64 /opt/vc/lib
)

find_path(EGL_INCLUDE_DIR
    NAMES EGL/egl.h
    HINTS ${PC_EGL_INCLUDEDIR} /usr/include /usr/include/EGL /opt/vc/include
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(EGL
    REQUIRED_VARS EGL_LIBRARY EGL_INCLUDE_DIR
)

mark_as_advanced(EGL_LIBRARY EGL_INCLUDE_DIR)

set(EGL_LIBRARIES ${EGL_LIBRARY})
set(EGL_INCLUDE_DIRS ${EGL_INCLUDE_DIR})
