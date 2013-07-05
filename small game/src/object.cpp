#include "../include/object.hpp"

//TODO provide a way to delete object
//TODO add comments


Object::Object(){


}

Object::Object(string name, sf::RenderWindow &win)
{
    this->objName = name;
    loaded = false;

}
Object::Object(string name,int posx, int posy, sf::RenderWindow &win)
{
    loaded = false;//holds whether image has been loaded or not
    loadObject(name);
    _sprite.setPosition(posx, posy);
}

void Object::draw(sf::RenderWindow &win)
{
   win.draw(_sprite);

}

sf::Vector2f Object::getPosition()
{
	return _sprite.getPosition();
}


void Object::loadObject(string name)
{

    if(_texture.loadFromFile(name) == false)
    {
        loaded = false;
        cout<<"error loading file: "<<name<<endl;
    }
    else
    {
        loaded = true;
        this->objName = name;
        _sprite.setTexture(_texture);
    }

}

void Object::loadObject()
{

    //TODO check if loadObject(string name) was used in a previous operation to avo
    if(_texture.loadFromFile(this->objName) == false)
    {
        cout<<"error loading file: "<<this->objName<<endl;
    }
    else
    {
           loaded = true;
           _sprite.setTexture(_texture);
    }
}


void Object::move()
{
    _sprite.move(50.0,0.0);

}

void Object::move(int xpos, int ypos)
{
   if(loaded)
    {
		_sprite.move(xpos, ypos);
    }
}

void Object::setPosition(int posx, int posy)
{
    if(loaded)
    {
		_sprite.setPosition( posx, posy);
    }
}

//object.cpp
