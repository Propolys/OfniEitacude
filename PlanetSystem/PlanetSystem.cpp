#include "PlanetSystem.h"
#include <iostream>
PlanetSystem::PlanetSystem()
{
    this->testplanet = new Planet(50);
}

void PlanetSystem::draw(sf::RenderWindow* window)
{
    this->testplanet->draw(window);
}

Planet::Planet(int radius)
{
    this->vectorDrawer = new sf::CircleShape(radius, 100);
}

void Planet::draw(sf::RenderWindow* window)
{
    window->draw(*this->vectorDrawer);
}
