#include <iostream>
#include "Goblin.h"
#include "Hero.h"
#include "Troll.h"

#define NUM_CREATURES 3

using namespace std;

int main(){
	Goblin goblin;
	Hero hero;
	Troll troll;

	//Set creatures info
	goblin.creature_info(200, "Goblin");
	hero.creature_info(250, "Hero");
	troll.creature_info(300, "Troll");

	for (int i = 0; i < NUM_CREATURES; i++){

	}

	getchar();
	return 0;
}