/* 
 * File:   SimpleHammer.h
 * Author: Nick <ndl17>
 * 
 * Created on September 25, 2017, 3:31 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("simple hammer", 25.0) //Calls Weapon(name, hitpoints) constructor with values simple spear and 50.0
    {
    }

    virtual ~SimpleHammer(){};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */

