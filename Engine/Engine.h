#ifndef ENGINE_H
#define ENGINE_H
#include <SFML/Graphics.hpp>

class gameMaster
{
private:
  sf::RenderWindow* window;
  void loopStep();
  void loop();
  void processEvent(sf::Event ev);
public:
  gameMaster();
};

#endif
