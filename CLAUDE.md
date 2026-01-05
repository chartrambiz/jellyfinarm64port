# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

Jellyfin Desktop ARM64 is a desktop client for Jellyfin media server, optimized for Raspberry Pi 4B running ARM64 (aarch64). It's built with Qt WebEngine and libmpv for hardware-accelerated video playback with audio passthrough support.

## Build Commands

### Quick Build (Linux/x86_64)
```bash
cmake -B build
cmake --build build
```

### ARM64/Raspberry Pi Build
```bash
./build-arm64.sh [wayland|xcb|linuxfb]  # Default: wayland
```

Or manually:
```bash
mkdir -p build-arm64 && cd build-arm64
cmake .. \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_TOOLCHAIN_FILE=../CMakeModules/arm64-toolchain.cmake \
    -DBUILD_TARGET=RPI \
    -DQT_QPA_PLATFORM=wayland
make -j$(nproc)
```

### Running Tests
```bash
cd build
ctest --output-on-failure
# Or run individual tests:
./tests/test_systemcomponent
```

### Debugging the Web UI
```bash
# Run with remote debugging
./JellyfinDesktop --remote-debugging-port=9222
# Open chrome://inspect/#devices in Chromium and configure localhost:9222
```

## Raspberry Pi Specific Issues

### QT_QPA_PLATFORM Setting
**Critical:** The app requires X11 platform, not EGLFS. If `QT_QPA_PLATFORM=eglfs` is set, the app will hang on startup.

```bash
# Run with X11 platform explicitly
QT_QPA_PLATFORM=xcb jellyfin-desktop

# Check your current setting
echo $QT_QPA_PLATFORM

# Remove eglfs from shell profile if set
# In ~/.bashrc: comment out or change: export QT_QPA_PLATFORM=eglfs
```

### Hardware Decoding on Pi 4
The Pi 4's V3D GPU lacks proper driver support for standard video decode APIs:

| API | Status on Pi 4 |
|-----|----------------|
| VDPAU | No driver available |
| VAAPI | Fails to initialize (`va_openDriver() returns -1`) |
| V4L2 | Partial support, errors during playback |
| MMAL | Unsupported in mpv on ARM64 |

**Fix:** Set hardware decoding to "sw" (software) in app settings:
- Settings → Video → Hardware Decoding → "sw"

### GBM/DMA-BUF Errors
Qt WebEngine shows GBM errors on Pi - these are harmless warnings indicating the GPU doesn't fully support the DMA-BUF features Chromium expects. The app falls back to software rendering.

## Architecture

### Core Components (src/core/)
- **ComponentManager** - Manages application component lifecycle
- **ProfileManager** - Handles user profiles and configuration
- **Globals** - Global application state and singletons
- **SignalManager** - Unix signal handling for graceful shutdown

### Shared Utilities (src/shared/)
- **Paths** - Cross-platform path management for config/cache/logs
- **LocalJsonClient/Server** - IPC via local JSON sockets
- **UniqueApplication** - Single-instance application enforcement

### Display Subsystem (src/display/)
Platform-specific rendering backends:
- **x11/** - X11 desktop environment
- **rpi/** - Raspberry Pi (MMAL/Broadcom GPU)
- **wayland/** - Wayland compositor
- **dummy/** - Headless/offscreen rendering
- **win/** - Windows DirectX
- **osx/** - macOS Cocoa

### Media Playback (src/player/)
- Integrates libmpv for video decoding
- Hardware decoding support (V4L2, VAAPI, MMAL)
- Audio passthrough configuration

### Key CMake Configuration
- **PlayerConfiguration.cmake** - OpenGL/GLES and mpv setup
- **LinuxARM64Configuration.cmake** - ARM64-specific EGL/VAAPI/V4L2 setup
- **arm64-toolchain.cmake** - Cross-compilation toolchain for ARM64
- **QtConfiguration.cmake** - Qt6 resource generation and QML modules

## Platform Detection

The build system auto-detects the target platform:
- `APPLE` → macOS configuration
- `WIN32` → Windows configuration
- `UNIX AND NOT APPLE` → Linux configuration
- On Linux ARM64 (aarch64/arm64): Includes `LinuxARM64Configuration.cmake`

## Dependencies

Key system dependencies (see `debian/control`):
- Qt6: base, declarative, webengine, wayland
- libmpv-dev
- libegl1-mesa-dev, libgles2-mesa-dev (ARM64)
- libva-dev, libv4l2-dev (hardware decoding)
- libdbus-1-dev (Linux MPRIS support)
