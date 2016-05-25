#include "Engine.h"
#include <iostream>

gameMaster::gameMaster(void)
{
  this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML TEST");
  loop();
}

void gameMaster::loop()
{
    while(this->window->isOpen()) this->loopStep();
}
void gameMaster::loopStep()
{
    sf::Event event;
    while (window->pollEvent(event))
    {
        processEvent(event);
    }
    window->clear();
    window->display();
}
void gameMaster::processEvent(sf::Event ev)
{
    if(ev.type == sf::Event::MouseButtonPressed)
    {
    }
    else if(ev.type == sf::Event::Closed)
        window->close();
}
