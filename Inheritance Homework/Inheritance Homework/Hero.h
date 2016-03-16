#ifndef _HERO_H_
#define _HERO_H_

#include "Creature.h"

class Hero : public Creature{
public:
	int atk_pow = 60;
	int atk_speed = 4;

	int creature_hp(int enemy_attack_power) {
		return hp - enemy_attack_power;
	}
};

#endif