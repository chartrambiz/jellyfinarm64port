#!/bin/bash
# ARM64/Raspberry Pi build script for Jellyfin Desktop
# Usage: ./build-arm64.sh [wayland|xcb|linuxfb]

set -e

# Detect architecture
ARCH=$(uname -m)
if [ "$ARCH" != "aarch64" ]; then
    echo "Warning: Building for ARM64 on $ARCH - cross-compilation not tested"
fi

# Determine Qt platform (default: wayland)
QT_PLATFORM="${1:-wayland}"
echo "Building for Qt platform: $QT_PLATFORM"

# Create build directory
BUILD_DIR="build-arm64"
if [ -d "$BUILD_DIR" ]; then
    echo "Cleaning existing build directory..."
    rm -rf "$BUILD_DIR"
fi
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

# Install ARM64 dependencies (Debian/Ubuntu)
echo "Installing ARM64 dependencies..."
if command -v apt-get &> /dev/null; then
    sudo apt-get update
    sudo apt-get install -y \
        build-essential \
        cmake \
        pkg-config \
        qt6-base-dev \
        qt6-base-dev-tools \
        qt6-declarative-dev \
        qt6-webengine-dev \
        libmpv-dev \
        libegl1-mesa-dev \
        libgles2-mesa-dev \
        libgl1-mesa-dev \
        libva-dev \
        libv4l-dev \
        libx11-dev \
        libxrandr-dev \
        libxkbcommon-dev \
        libwayland-dev \
        libudev-dev \
        libinput-dev \
        libdbus-1-dev \
        libminizip-dev \
        zlib1g-dev \
        liblzma-dev
fi

# Configure with CMake
echo "Configuring CMake for ARM64..."
cmake .. \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_TOOLCHAIN_FILE=../CMakeModules/arm64-toolchain.cmake \
    -DBUILD_TARGET=RPI \
    -DQT_QPA_PLATFORM="$QT_PLATFORM" \
    -DQt6_POSITION_INDEPENDENT_CODE=ON \
    -DCMAKE_C_COMPILER=aarch64-linux-gnu-gcc \
    -DCMAKE_CXX_COMPILER=aarch64-linux-gnu-g++ \
    -DMPV_HWDEC_OPTIONS="v4l2m2m-copy,vaapi,default"

# Build
echo "Building Jellyfin Desktop for ARM64..."
make -j$(nproc)

echo ""
echo "Build complete!"
echo "Binary: $BUILD_DIR/JellyfinDesktop"
echo ""
echo "To run on Raspberry Pi:"
echo "  export QT_QPA_PLATFORM=$QT_PLATFORM"
echo "  ./JellyfinDesktop"
echo ""
echo "For playback, ensure mpv is compiled with:"
echo "  --enable-rpi --enable-v4l2-request --enable-libdrm --enable-mmal"
