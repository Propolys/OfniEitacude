#ifndef PLANETSYSTEM_H
#define PLANETSYSTEM_H
#include <SFML/Graphics.hpp>

class Planet
{
private:
  sf::CircleShape* vectorDrawer;
public:
  Planet(int radius);
  void draw(sf::RenderWindow* window);
};

class PlanetSystem
{
private:
  Planet* testplanet;
public:
  PlanetSystem();
  void draw(sf::RenderWindow* window);
};



#endif
