#include "WarhammerOfEven.h"

double WarhammerOfEven::hit(double armor){
    if((int)armor % 2 == 0)
        return hitPoints;
    else
        return hitPoints / (armor/2);
}



