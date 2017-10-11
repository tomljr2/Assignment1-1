/* 
 * File:   WeaponFactory.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 25, 2017, 3:25 PM
 */
#include "Weapon.h"

#ifndef WEAPONFACTORY_H
#define WEAPONFACTORY_H

/**
 * Creation of weapons is encapsulated into the WeaponFactory class.
 *  
 */
class WeaponFactory{
public:    
    /**
     * Return an implementation of a weapon given its name
     * @param name Name of the weapon to be created
     * @return Implementation of the method (an instance of the Weapon class)
     */
    Weapon *getWeapon(std::string name);
    static WeaponFactory* getInstance();    
    /**
     * Destructor
     */
    ~WeaponFactory(){}    
private:
    static WeaponFactory *instance;
    WeaponFactory(){};

}; 

#endif /* WEAPONFACTORY_H */

