安装：

vcpkg_linux.sh不运行，直接拷贝华为端的vcpkg_linux文件夹到build目录下。

把build_linux.sh中VCPKG_TARGET_TRIPLET=x64-linux改为VCPKG_TARGET_TRIPLET=arm64-linux

修改：

src/ImGui/imgui_impl_glfw.cpp中的250-253行运行的时候会报错，把函数修改成新的函数名。（可以参考华为的RayTracingInVulkan-master）

shader适配spirv-cross:

clockARB()不支持spirv-cross。删去相关内容：第22行创建clock以及第92-99行heapmap相关分支。
