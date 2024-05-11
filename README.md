# Ray Tracing In Vulkan --- pure ray tracing

This Rep clone from https://github.com/GPSnoopy/RayTracingInVulkan. we removed the content related to rasterization to try to support pure ray tracing. (The original Rep had an initialization about rasterization when using ray tracing mode.) We also add the FPS on the window.

Built int the same way as RayTracingInVulkan.

This Rep may support gltf model loading in the future.

## Building

First you will need to install the [Vulkan SDK](https://vulkan.lunarg.com/sdk/home). For Windows, LunarG provides installers. For Ubuntu LTS, they have native packages available. For other Linux distributions, they only provide tarballs. The rest of the third party dependencies can be built using [Microsoft's vcpkg](https://github.com/Microsoft/vcpkg) as provided by the scripts below.

If in doubt, please check the GitHub Actions [continuous integration configurations](.github/workflows) for more details.

**Windows (Visual Studio 2022 x64 solution)** [![Windows CI Status](https://github.com/GPSnoopy/RayTracingInVulkan/workflows/Windows%20CI/badge.svg)](https://github.com/GPSnoopy/RayTracingInVulkan/actions?query=workflow%3A%22Windows+CI%22)
```
vcpkg_windows.bat
build_windows.bat
```
**Linux (GCC 9+ Makefile)** [![Linux CI Status](https://github.com/GPSnoopy/RayTracingInVulkan/workflows/Linux%20CI/badge.svg)](https://github.com/GPSnoopy/RayTracingInVulkan/actions?query=workflow%3A%22Linux+CI%22)

For example, on Ubuntu 20.04 (same as the CI pipeline, build steps on other distributions may vary):
```
sudo apt-get install curl unzip tar libxi-dev libxinerama-dev libxcursor-dev xorg-dev
./vcpkg_linux.sh
./build_linux.sh
```

Fedora Installation

```
sudo dnf install libXinerama-devel libXcursor-devel libX11-devel libXrandr-devel mesa-libGLU-devel pkgconfig ninja-build cmake gcc gcc-c++ vulkan-validation-layers-devel vulkan-headers vulkan-tools vulkan-loader-devel vulkan-loader glslang glslc
./vcpkg_linux.sh
./build_linux.sh
```

## References

### Initial Implementation (NVIDIA vendor specific extension)

* [Vulkan Tutorial](https://vulkan-tutorial.com/)
* [Introduction to Real-Time Ray Tracing with Vulkan](https://devblogs.nvidia.com/vulkan-raytracing)
* [NVIDIA Vulkan Ray Tracing Tutorial](https://developer.nvidia.com/rtx/raytracing/vkray)
* [NVIDIA Vulkan Ray Tracing Helpers: Introduction](https://developer.nvidia.com/rtx/raytracing/vkray_helpers)
* [Fast and Fun: My First Real-Time Ray Tracing Demo](https://devblogs.nvidia.com/my-first-ray-tracing-demo/)
* [Getting Started with RTX Ray Tracing](https://github.com/NVIDIAGameWorks/GettingStartedWithRTXRayTracing)
* [D3D12 Raytracing Samples](https://github.com/Microsoft/DirectX-Graphics-Samples/tree/master/Samples/Desktop/D3D12Raytracing)
* [George Ouzounoudis's vk_exp](https://github.com/georgeouzou/vk_exp)
* [NVIDIA Vulkan Forums](https://devtalk.nvidia.com/default/board/166/vulkan)
* [Profiling DXR shaders with Timer Instrumentation](https://www.reddit.com/r/vulkan/comments/hhyeyj/profiling_dxr_shaders_with_timer_instrumentation/)

### Vulkan Khronos Ray Tracing (cross platform extension)

* [Khronos Vulkan Registry](https://www.khronos.org/registry/vulkan/)
* [NVIDIA Vulkan Ray Tracing Tutorial (VK_KHR_ray_tracing)](https://github.com/nvpro-samples/vk_raytracing_tutorial_KHR)
* [NVIDIA Converting VK_NV_ray_tracing to VK_KHR_ray_tracing](https://nvpro-samples.github.io/vk_raytracing_tutorial_KHR/NV_to_KHR.md.htm)
* [Vulkan Ray Tracing Final Specification Release](https://www.khronos.org/blog/vulkan-ray-tracing-final-specification-release)
