# Find VAAPI (Video Acceleration API)
# Used for hardware video decoding on Intel/AMD GPUs

find_package(PkgConfig QUIET)

if(PKG_CONFIG_FOUND)
    pkg_check_modules(PC_VAAPI QUIET libva)
endif()

find_library(VAAPI_LIBRARY
    NAMES va libva
    HINTS ${PC_VAAPI_LIBRARY_DIRS} /usr/lib/aarch64-linux-gnu /usr/lib64
)

find_path(VAAPI_INCLUDE_DIR
    NAMES va/va.h
    HINTS ${PC_VAAPI_INCLUDEDIR} /usr/include /usr/include/va
)

# Also look for VAAPI driver
find_library(VAAPI_DRV_LIBRARY
    NAMES va_drv_video智能化 video_decode
    HINTS /usr/lib/aarch64-linux-gnu/dri /usr/lib64/dri /usr/lib/x86_64-linux-gnu/dri
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(VAAPI
    REQUIRED_VARS VAAPI_LIBRARY VAAPI_INCLUDE_DIR
)

mark_as_advanced(VAAPI_LIBRARY VAAPI_INCLUDE_DIR VAAPI_DRV_LIBRARY)

set(VAAPI_LIBRARIES ${VAAPI_LIBRARY})
set(VAAPI_INCLUDE_DIRS ${VAAPI_INCLUDE_DIR})
set(VAAPI_FOUND ${VAAPI_FOUND})
