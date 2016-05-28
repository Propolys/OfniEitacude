#include "Engine.h"
#include <iostream>

gameMaster::gameMaster(void)
{
  planetSystem = new PlanetSystem();
  sf::ContextSettings windowSettings;
  windowSettings.antialiasingLevel = 8;
  this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML TEST", sf::Style::Default, windowSettings);
  this->clearColor = new sf::Color(5, 5, 5, 255);
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
    window->clear(*this->clearColor);
    planetSystem->draw(this->window);
    window->display();
}
void gameMaster::processEvent(sf::Event ev)
{
    if(ev.type == sf::Event::Closed)
        window->close();
}
