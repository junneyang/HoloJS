﻿# HoloJs

[Documentation](https://microsoft.github.io/HoloJS) — [Samples](https://microsoft.github.io/HoloJS/app-samples.html)

HoloJs is an execution host for JavaScript Augmented and Virtual Reality applications.

HoloJs enables JavaScript rendering to Win32 windows and controls, UWP views, Windows Mixed Reality headsets and the HoloLens through web standard interfaces such as WebGL, WebVR, WebAudio, Gamepad APIs, Canvas, XmlHttpRequest, Image.

## Usage
The fastest way to create VR and AR experiences with HoloJs is to use the [Spin](https://github.com/microsoft/HoloJS/releases) tool and Visual Studio Code. Spin is a HoloJs execution host that integrates with Visual Studio Code for a seamless run and debug experience. Please refer to [VR and AR experiences with Spin](https://microsoft.github.io/HoloJS/spin-make.html) for more details.

Alternatively, use the [HoloJs Nuget package](https://www.nuget.org/packages/holojs) for embedding it into Win32 and UWP apps. Please refer to [HoloJs in Win32 apps](https://microsoft.github.io/HoloJS/win32-apps.html) and [HoloJs in UWP apps](https://microsoft.github.io/HoloJS/uwp-apps.html) for detailed instructions.

Lastly, HoloJs can be built from scratch and customized as needed.

## Building HoloJs

**Note** It is not required to build HoloJs in order to use it. Use the [HoloJs Nuget package](https://www.nuget.org/packages/holojs) to embed JavaScript and WebGL in Win32 or UWP apps.

Building instructions for all dependent submodules are provided in the build-instructions directory. Visual Studio 2017 with C++, UWP and CMake support is required. To build Google ANGLE, GN and depot_tools are required.

### Dependencies
All dependencies are build time dependencies in the form of git submodules.
* [ChakraCore](https://github.com/Microsoft/ChakraCore) provides the JavaScript runtime.
* [Google ANGLE](https://github.com/google/angle) provides the WebGL implementation for the Win32 platform.
* [Microsoft ANGLE](https://github.com/microsoft/angle) provides the WebGL implementation for the UWP and HoloLens platform.
* [LabSound](https://github.com/LabSound/LabSound) provides the WebAudio implementation, including spatial audio rendering.
* [ChakraCore debugger](https://github.com/Microsoft/ChakraCore-Debugger) provides the debugger protocol implementation that enables editing and debugging HoloJs apps using Visual Studio Code.
* [Win2D](https://github.com/Microsoft/Win2D) provides the implementation for canvas's 2D context on the Windows platform.
* [ZipLib](https://bitbucket.org/wbenny/ziplib) provides cross platform archive decompression.
* [zxing-cpp](https://github.com/nu-book/zxing-cpp) provides QR code decoding for the Spin viewer on the HoloLens
