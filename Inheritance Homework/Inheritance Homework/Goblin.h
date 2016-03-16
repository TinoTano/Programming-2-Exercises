#ifndef _GOBLIN_H_
#define _GOBLIN_H_

#include "Creature.h"

class Goblin : public Creature{
public:
	int atk_pow = 50;
	int atk_speed = 3;

	int creature_hp(int enemy_attack_power) {
		return hp - enemy_attack_power;
	}
};

#endif