#include "GraphicEngine.h"
#include <iostream>

gameMaster::Graphics(void)
{
  this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML TEST");
  loop();
}

void Graphics::loop()
{
    while(this->window->isOpen()) this->loopStep();
}
void Graphics::loopStep()
{
    sf::Event event;
    while (window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
          window->close();
    }
    window->clear();
    window->display();
}
