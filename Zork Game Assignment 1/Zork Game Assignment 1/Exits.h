#ifndef _EXITS_
#define _EXITS_

#include <iostream>
#include <vector>
#include "Rooms.h"

using namespace std;

class Exits{

public:
	vector<string> exits;
	string direction;
	void Exits_info(areas area);
};

#endif 