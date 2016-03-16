#ifndef _CREATURE_H_
#define _CREATURE_H_

#include <string>

using namespace std;

class Creature{
protected:
	int hp;
	string name;
	
public:
	void creature_info(int creature_hp, string creature_name){
		hp = creature_hp;
		name = creature_name;
		cout << creature_name << " have " << creature_hp << "HP" << endl;
	};

	int Battle_result(int creature1_hp, int creature2_attack_power){
		return creature1_hp - creature2_attack_power;
	}
};

#endif