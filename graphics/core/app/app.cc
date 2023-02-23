#include "app.h"

namespace graphics{

  void App::run(){

    while(!gWindow_.should_close()){
      glfwPollEvents();
    }

  }

} // namespace graphics;