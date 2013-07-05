#include "../include/manager.hpp"


Manager::Manager()
{

}

Manager::~Manager()
{


}

void Manager::add(Object* obj, string name)
{

    Container.insert(std::pair<std::string,  Object*>(name, obj));
    //Container[name] = obj;

}

void Manager::renderAll(sf::RenderWindow &win)
{

  for( std::map<string, Object*>::iterator itr =Container.begin(); itr != Container.end(); itr++)

	{
        (*itr).second->draw(win);
		//cout<<(*itr).first<<" "<<(*itr).second<<endl;
		}

}



map<string, Object*> Manager::Container;
