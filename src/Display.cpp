#include "../include/Display.h"

namespace mc {

Display::Display(uint32_t width, uint32_t height) : running_(false) {
  window_.create(sf::VideoMode(width, height), "MineCraft", sf::Style::Default, sf::ContextSettings(32));
  window_.setVerticalSyncEnabled(true);
}

void Display::Run() {
  window_.setActive(true);
  running_ = true;
  while(running_) {
    // handle events
    sf::Event event;
    while(window_.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        // end the program
        running_ = false;
      } else if (event.type == sf::Event::Resized) {
        glViewport(0, 0, event.size.width, event.size.height);
      }
    }

    // clear the buffers
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // gl draw

    // end the current frame (internally swaps the front and back buffers)
    window_.display();
  }
}

}