#ifndef __GMANAGER_H
#define __GMANAGER_H

#include "object.hpp"
#include <map>
#include <vector>
#include <string>
/*


This class will be used to keep track of all objects that have been created

*/
using namespace std;

class Manager
{
public:
	Manager();
	~Manager();
	std::vector<Object*> Ctainer;
    static map< string, Object*> Container;
    std::map <string, Object*> _c;
	void add(Object* obj, string name);//adds object to the Container map
	void renderAll(sf::RenderWindow &win); //on each game loop this method will be used to redraw all our sprites
	void update();//will be used to do any necessary updating if needs be
private:

	void remove();//used for the removing of any Object that is no longer needed and frees up the allocated memory for them
	//std::vector<Object*> container;
	 //map container used to store all new objects


};

#endif
