#ifndef ENGINE_H
#define ENGINE_H
#include <SFML/Graphics.hpp>
#include "../PlanetSystem/PlanetSystem.h"

class gameMaster
{
private:
  sf::RenderWindow* window;
  sf::Color* clearColor;
  PlanetSystem* planetSystem;
  void loopStep();
  void loop();
  void processEvent(sf::Event ev);
public:
  gameMaster();
};

#endif
