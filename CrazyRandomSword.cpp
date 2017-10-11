#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){
	double damage = hitPoints - (rand() % (int)(armor / 2));
	return damage;
}

