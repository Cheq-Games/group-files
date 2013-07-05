#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "object.hpp"
#include "manager.hpp"


class Game
{

public:

    Game(string title);
    ~Game();
    void init();
    Object *Player1;
    Object *Player2;

private:
    void Resources();
    void GameLoop();
    void Render();
    void userInput(sf::Event);
    sf::RenderWindow window;
    sf::Event e;
    Manager *_manager;
};
#endif



