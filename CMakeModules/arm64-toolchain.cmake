# CMake Toolchain file for ARM64 (aarch64) cross-compilation
# Usage: cmake .. -DCMAKE_TOOLCHAIN_FILE=../CMakeModules/arm64-toolchain.cmake

# Target system
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

# Specify the cross compilers
set(CMAKE_C_COMPILER aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER aarch64-linux-gnu-g++)

# Specify the sysroot if cross-compiling
# set(CMAKE_SYSROOT /path/to/arm64-sysroot)

# Search for programs only in the host environment
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)

# Search for libraries and headers only in the target environment
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

# ARM-specific compiler flags
set(CMAKE_C_FLAGS_INIT "-march=armv8-a+crc+crypto -mfpu=neon -ffast-math")
set(CMAKE_CXX_FLAGS_INIT "-march=armv8-a+crc+crypto -mfpu=neon -ffast-math")

# Disable SSE optimizations
set(CMAKE_C_FLAGS_INIT "${CMAKE_C_FLAGS_INIT} -mno-sse -mno-sse2")
set(CMAKE_CXX_FLAGS_INIT "${CMAKE_CXX_FLAGS_INIT} -mno-sse -mno-sse2")

message(STATUS "ARM64 toolchain configured")
