#ifndef MC_DISPLAY_H
#define MC_DISPLAY_H

#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

namespace mc {

class Display {

public:
  Display(uint32_t width, uint32_t height);
  ~Display() = default;
  void Run();

private:
  bool running_{};
  sf::Window window_;
};

}

#endif