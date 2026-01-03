# Find V4L2 (Video4Linux2)
# Used for camera capture and hardware video decoding on ARM

find_package(PkgConfig QUIET)

if(PKG_CONFIG_FOUND)
    pkg_check_modules(PC_V4L2 QUIET libv4l2 v4l2)
endif()

find_library(V4L2_LIBRARY
    NAMES v4l2 v4l2turbo
    HINTS ${PC_V4L2_LIBRARY_DIRS} /usr/lib/aarch64-linux-gnu /usr/lib64
)

find_path(V4L2_INCLUDE_DIR
    NAMES libv4l2.h linux/videodev2.h
    HINTS ${PC_V4L2_INCLUDEDIR} /usr/include /usr/include/linux
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(V4L2
    REQUIRED_VARS V4L2_LIBRARY V4L2_INCLUDE_DIR
)

mark_as_advanced(V4L2_LIBRARY V4L2_INCLUDE_DIR)

set(V4L2_LIBRARIES ${V4L2_LIBRARY})
set(V4L2_INCLUDE_DIRS ${V4L2_INCLUDE_DIR})
set(V4L2_FOUND ${V4L2_FOUND})
