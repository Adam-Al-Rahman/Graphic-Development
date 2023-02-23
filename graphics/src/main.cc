#include "graphics/core/app/app.h"

#include <cstdlib>
#include <iostream>
#include <stdexcept>


int main(){


  graphics::App g_app{};

  try{
    g_app.run();
  } catch(const std::exception& e){
    std::cerr << "Error: " << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;

}