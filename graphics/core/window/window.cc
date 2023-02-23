#include "window.h"

namespace graphics{

  GWindow::GWindow(int width, int height, std::string name): window_width_{width}, window_height_{height}, window_name_{std::move(name)}{
    init_window();
  }

  GWindow::~GWindow(){
    glfwDestroyWindow(window_);
    glfwTerminate();
  }

  void GWindow::init_window(){
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);


    window_ = glfwCreateWindow(window_width_, window_height_, window_name_.c_str(), nullptr, nullptr);
  }

} // namespace graphics;