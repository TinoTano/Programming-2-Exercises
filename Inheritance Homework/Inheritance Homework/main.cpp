#include <iostream>
#include "Goblin.h"
#include "Hero.h"
#include "Troll.h"

using namespace std;

int main(){
	Goblin goblin;
	Hero hero;
	Troll troll;

	//Set creatures info
	goblin.creature_info(200, "Goblin");
	hero.creature_info(250, "Hero");
	troll.creature_info(300, "Troll");

	goblin.creature_hp(hero.atk_pow);

	getchar();
	return 0;
}