#ifndef PLANETSYSTEM_H
#define PLANETSYSTEM_H
#include <SFML/Graphics.hpp>

class PlanetSystem
{
private:
  sf::Image* planet;
public:
  PlanetSystem();
  draw();
}

#endif
