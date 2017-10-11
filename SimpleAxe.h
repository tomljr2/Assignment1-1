#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

#include <string>
#include "Weapon.h"

class SimpleAxe : public Weapon {
public:
    SimpleAxe() : Weapon("Simple axe", 60.0) {
    }
    virtual ~SimpleAxe() {};
    virtual double hit(double armor);

};

#endif
