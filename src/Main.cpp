#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include "../include/Display.h"

using namespace mc;

int main()
{
  Display display(800, 600);
  display.Run();

  return 0;
}