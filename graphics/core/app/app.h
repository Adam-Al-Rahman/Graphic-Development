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

#ifndef GRAPHICS_CORE_APP_APP_H_
#define GRAPHICS_CORE_APP_APP_H_

#include "graphics/core/window/window.h"


namespace graphics {

  class App{

    private:
      GWindow gWindow_{kWidth, kHeight, "GraphX"};

    public:
      static constexpr int kWidth = 800;
      static constexpr int kHeight = 600;

      void run();

  };
}

#endif // GRAPHICS_CORE_APP_APP_H_