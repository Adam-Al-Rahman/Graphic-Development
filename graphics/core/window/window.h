/**
 * @file window.cc
 * @author Adam-Al-Rahman (https://atiq-ur-rehaman.netlify.app)
 * @brief GLFW window session manage
 * @version 0.1
 * @date 2023-02-22
 *
 * @copyright Copyright (Adam-Al-Rahman/GRAPHICS) 2023
 *
 */

#ifndef GRAPHICS_CORE_WINDOW_WINDOW_H
#define GRAPHICS_CORE_WINDOW_WINDOW_H

#define GLFW_INCLUDE_VULKAN // to indicate to include vulkan header file
#include <GLFW/glfw3.h>

#include <string>

namespace graphics{

  class GWindow{

    private:
      void init_window();

      const int window_width_;
      const int window_height_;
      std::string window_name_;

      GLFWwindow *window_;

    public:
      GWindow(int window_width, int window_height, std::string window_name);
      ~GWindow(); // destructor: for clean when we done with using the window

      GWindow(const GWindow&) = delete;;
      GWindow& operator = (const GWindow&) = delete;;


      bool should_close(){
        return glfwWindowShouldClose(window_) != 0;
      }


  };

} // namespace graphics;


# endif