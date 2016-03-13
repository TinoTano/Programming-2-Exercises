#ifndef _ROOMS_
#define _ROOMS_

#include <iostream>
#include "Globals.h"

using namespace std;

class Rooms{

public:
	
	string name;
	string description;
	int actual_room;
	bool closed;
	void Room_info(areas area);

};

#endif 
