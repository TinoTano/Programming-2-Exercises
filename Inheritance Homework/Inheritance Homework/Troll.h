#ifndef _TROLL_H_
#define _TROLL_H_

#include "Creature.h"

class Troll : public Creature{
public:
	int atk_pow = 75;
	int atk_speed = 5;

	int creature_hp(int enemy_attack_power) {
		return hp - enemy_attack_power;
	}
};

#endif