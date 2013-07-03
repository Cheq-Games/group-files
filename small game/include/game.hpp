#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "object.hpp"


class Game 
{

public:
    Game();
    ~Game();
    
   
private:
    void init();
    void GameLoop();
    sf::RenderWindow window;
    sf::Event e;

};
#endif



