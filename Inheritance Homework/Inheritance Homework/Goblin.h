#ifndef _GOBLIN_H_
#define _GOBLIN_H_

#include "Creature.h"

class Goblin : public Creature{
public:
	int atk_pow = 50;
	int atk_speed = 3;

	void creature_hp(int enemy_attack_power) {
		hp = hp - enemy_attack_power;
		cout << hp << endl;
	}
};

#endif