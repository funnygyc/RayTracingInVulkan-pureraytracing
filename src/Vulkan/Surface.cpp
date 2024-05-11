#include "Surface.hpp"
#include "Instance.hpp"
#include "Window.hpp"
#include <xcb/xcb.h>

namespace Vulkan {

Surface::Surface(const class Instance& instance) :
	instance_(instance)
{
	Check(glfwCreateWindowSurface(instance.Handle(), instance.Window().Handle(), nullptr, &surface_),
		"create window surface");
	std::cout << "instance.Window().Handle() : " << instance.Window().Handle() << std::endl;
	std::cout << "instance.Handle() : " << instance.Handle() << std::endl;
	std::cout << "surface : " << surface_ << std::endl;
	xcb_window_t xcbWindow = glfwGetX11Window(instance.Window().Handle());
	std::cout << "xcbWindow : " << xcbWindow << std::endl;
	// // 打开 X11 连接
    // xcb_connection_t* connection = xcb_connect(NULL, NULL);

    // // 获取首要屏幕
    // const xcb_setup_t* setup = xcb_get_setup(connection);
    // xcb_screen_iterator_t iterator = xcb_setup_roots_iterator(setup);
    // xcb_screen_t* screen = iterator.data;

    // // 创建图形上下文
    // xcb_gcontext_t gc = xcb_generate_id(connection);
    // uint32_t mask = XCB_GC_FOREGROUND | XCB_GC_GRAPHICS_EXPOSURES;
    // uint32_t values[2] = {screen->white_pixel, 0};
    // xcb_create_gc(connection, gc, xcbWindow, mask, values);

    // // 创建一个矩形
    // xcb_rectangle_t rectangles[] = {{10, 10, 200, 100}};

    // // 绘制矩形到 XCB 窗口
    // xcb_poly_fill_rectangle(connection, xcbWindow, gc, 1, rectangles);

    // // 刷新 XCB 窗口
    // xcb_flush(connection);

}

Surface::~Surface()
{
	if (surface_ != nullptr)
	{
		vkDestroySurfaceKHR(instance_.Handle(), surface_, nullptr);
		surface_ = nullptr;
	}
}

}
