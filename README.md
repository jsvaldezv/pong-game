# Pong Game Clone

https://github.com/jsvaldezv/pong-game/assets/47612276/19579ca4-15d4-489f-94fb-93543ee2fc2a

This is a minimalist yet fully functional clone of the classic Pong game, developed in C++ using raylib for graphics and real-time input. The build system is handled with CMake, making it easy to compile and run across different platforms.

Main features:

- Classic Pong mechanics (player vs AI)
- Real-time paddle and ball movement using raylib’s rendering system
- Basic collision detection and scoring system
- Simple and clean C++ structure for game logic
- Cross-platform compatibility through CMake

This project offers a quick and accessible introduction to 2D game development, real-time rendering, and C++ game architecture using modern tools.

## Pre-requisites

### CMake

Before building the project you need to have CMake installed in your machine. You can use `brew install cmake` command or you can go to https://cmake.org/download/ and download the latest version for your machine OS. We recommend installing via first option but if you go with the second option after running the installer open the CMake app, go to Tools/How To Install For Command Line Use, and follow the instructions to finish installation.

To build the application on Windows you will need Visual Studio with Clang support. On the Visual Studio Installer app, make sure you install the following:

* Workloads
    * Desktop development with C++
* Individual components
    * C++ Clang Compiler for Windows
    * C++ Clang-cl for v143 build tools (x64/x86)

### Clang-format

macOS
```
brew install clang-format
```

Windows

You can get it as part of the LLVM compiler or Clang Compiler build for Windows. You also can try to install it with npm
```
npm install -g clang-format
```

## How to build project and open IDE? (recommended)

macOS
```
sh Scripts/macOS/build_xcode.sh
```

Windows
```
start Scripts/windows/build_vs22.bat
```

## How to format code?

macOS
```
sh Scripts/macOS/formatter.sh
```

Windows
```
start Scripts/windows/formatter.bat
```
