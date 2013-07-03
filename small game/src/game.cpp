#include "../include/game.hpp"

    
#define ScreenW  600
#define ScreenH 400

//Constructor
Game::Game()
{

    init();//initiate main game window
    GameLoop();//start our main loop
}

//~destructor
Game::~Game()
{

}

//initializing of game screen
void Game::init()
{
    window.create(sf::VideoMode(ScreenW, ScreenH), "CheQGames");
}


//main game loop where we check for all our events
void Game::GameLoop()
{

    while(window.isOpen())
    {
        while(window.pollEvent(e))
        {
            switch(e.type)
            {
                case sf::Event::Closed:
                    window.close();

                case sf::Event::KeyPressed :
                    if(e.key.code == sf::Keyboard::Escape)
                    {
                        window.close();
                    }
            }
                    
        }
           
        window.clear(sf::Color(255, 255,255));
        window.display();
    }

}
//game.cpp
