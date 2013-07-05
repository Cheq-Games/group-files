#ifndef __OBJECT__H
#define __OBJECT__H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace std;

class Object
{
public:
    Object();
    Object(string, sf::RenderWindow &);
    Object(string name,int posx, int posy, sf::RenderWindow &);
    ~Object();
    void draw(sf::RenderWindow &);
    void move(int , int);
    void move();
    void setPosition(int, int);
    void loadObject();
    sf::Vector2f getPosition();
    string objName;

private:
    void loadObject(string name);
    bool loaded;

    sf::Sprite _sprite;
    sf::Texture _texture;

};//_Object class
#endif
