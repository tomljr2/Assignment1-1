#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

#include <string>
#include "Weapon.h"
#include <time.h>
#include <cstdlib>

class CrazyRandomSword : public Weapon {
public:
    CrazyRandomSword() : Weapon("Crazy random sword", 0.0) {
    	srand(time(NULL));
	hitPoints = rand() % 100 + 10;
    }
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);
};

#endif

