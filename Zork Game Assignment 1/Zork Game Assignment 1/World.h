#ifndef _WORLD_
#define _WORLD_

#include "Player.h"
#include "Rooms.h"
#include "Exits.h"

class World{
private:
	Player* player = new Player;
	Rooms* room = new Rooms;
	Exits* exits = new Exits;

public:

	void Create_World_Init();
	void Create_World_Loop();
	void Create_World_End();

};

#endif // _WORLD_
