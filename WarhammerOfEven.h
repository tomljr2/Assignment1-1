#ifndef WARHAMMEROFEVEN_H
#define WARHAMMEROFEVEN_H

#include <string>
#include "Weapon.h"

class WarhammerOfEven : public Weapon {
public:
    WarhammerOfEven() : Weapon("Warhammer of Even", 85.0) {
    }
    virtual ~WarhammerOfEven() {};
    virtual double hit(double armor);

};

#endif

