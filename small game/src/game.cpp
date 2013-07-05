#include "../include/game.hpp"


#define ScreenW  600
#define ScreenH 400

//Constructor
Game::Game(string title)
{
    Manager *_manager = new Manager();
    window.create(sf::VideoMode(ScreenW, ScreenH), title);
    window.setFramerateLimit(30);

}

//~destructor
Game::~Game()
{

}

//initializing of game screen
void Game::init()
{
   //Player2 = new Object("data/img1.png", 100, 100, window);
   Player1 = new Object("data/img1.png", 200, 100, window);
   _manager->add(Player1, "PLayer1");




    GameLoop();//start our main loop

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
                        Player1->move(2,0);
                    }
                    if(e.key.code == sf::Keyboard::Left)
                    {
                      // Player1
                    }
                    if(e.key.code == sf::Keyboard::Right)
                    {
                        Player1->move(3,0);
                    }
                    if(e.key.code == sf::Keyboard::Up)
                    {
                        Player1->move(0,-3);
                    }
                    if(e.key.code == sf::Keyboard::Down)
                    {
                        Player1->move(0,3);
                    }


                    }//switch
            }//while loop
         Render();
         }
         //Player1->update();
        }//while loop




void Game::Render(){
    window.clear(sf::Color(255, 255,255));
    _manager->renderAll(window);
    window.display();
}


//game.cpp
