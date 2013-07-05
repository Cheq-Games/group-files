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
    Resources();
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
                    }
                    if(e.key.code == sf::Keyboard::Left){
                    cout<<"left key"<<endl;
                    this->Player1->move();
                        //this->Player2->move(5,0);
                    }
            }
        }
        Render();
    }
}

void Game::Render(){
    window.clear(sf::Color(255, 255,255));
    _manager->renderAll(window);
    window.display();
}

void Game::Resources()
{
   Object *Player2 = new Object("data/img1.png", 100, 100, window);
  Object *Player1 = new Object("data/img1.png", 200, 100, window);

   _manager->add(Player1, "player1");
   _manager->add(Player2, "player2");

}
//game.cpp
