# Jellyfin Desktop ARM64 - Raspberry Pi 4B Edition

![Raspberry Pi](https://img.shields.io/badge/platform-raspberry%20pi-brightgreen)
![ARM64](https://img.shields.io/badge/arch-arm64-blue)

## Overview

Jellyfin desktop client built with Qt WebEngine and [libmpv](https://github.com/mpv-player/mpv). Supports audio passthrough, hardware decoding, and playback of more formats without transcoding.

This port is optimized for the Raspberry Pi 4B running ARM64 (aarch64) architecture.

## Features

- Hardware-accelerated video playback
- Audio passthrough support
- Qt WebEngine-based interface
- libmpv integration for enhanced media playback

## Requirements

- Raspberry Pi 4B
- ARM64 OS (e.g., Raspberry Pi OS 64-bit)
- CMake
- libavcodec-dev
- libavformat-dev

## Building

### Quick Start (Pi 4B)

```bash
sudo apt install cmake libavcodec-dev libavformat-dev
git clone https://github.com/chartrambiz/jellyfinarm64port
cd jellyfinarm64port/build && cmake .. -DRPI=ON && make -j4
```

## Downloads

Pre-built releases for Windows, Mac, and Linux are available at [Jellyfin Desktop Releases](https://github.com/jellyfin/jellyfin-desktop/releases).

Note for Mac users:
- Intel builds require macOS 12+
- Apple Silicon builds require macOS 14+

For Linux, you can also install via [Flathub](https://flathub.org/apps/details/org.jellyfin.JellyfinDesktop).

## File Locations

Data is stored per-profile in a `profiles/<profile-id>/` subdirectory. The main configuration file is `jellyfin-desktop.conf`. You can also add `mpv.conf` to configure MPV directly.

**Windows:**
- Config: `%LOCALAPPDATA%\Jellyfin Desktop\profiles\<profile-id>\`
- Cache: `%LOCALAPPDATA%\Jellyfin Desktop\profiles\<profile-id>\`
- Logs: `%LOCALAPPDATA%\Jellyfin Desktop\profiles\<profile-id>\logs\`

**Linux:**
- Config: `~/.local/share/jellyfin-desktop/profiles/<profile-id>/`
- Cache: `~/.cache/jellyfin-desktop/profiles/<profile-id>/`
- Logs: `~/.local/share/jellyfin-desktop/profiles/<profile-id>/logs/`

**Linux (Flatpak):**
- Config: `~/.var/app/org.jellyfin.JellyfinDesktop/data/jellyfin-desktop/profiles/<profile-id>/`
- Cache: `~/.var/app/org.jellyfin.JellyfinDesktop/cache/jellyfin-desktop/profiles/<profile-id>/`
- Logs: `~/.var/app/org.jellyfin.JellyfinDesktop/data/jellyfin-desktop/profiles/<profile-id>/logs/`

**macOS:**
- Config: `~/Library/Application Support/Jellyfin Desktop/profiles/<profile-id>/`
- Cache: `~/Library/Caches/Jellyfin Desktop/profiles/<profile-id>/`
- Logs: `~/Library/Logs/Jellyfin Desktop/<profile-id>/`

## License

This project is licensed under the GNU GPL v3. See [LICENSE](LICENSE) for details.