/* 
 * File:   CrazyRandomSword.h
 * Author: Nick <ndl17>
 * 
 * Created on September 25, 2017, 3:31 PM
 */

#include <string>
#include "Weapon.h"
#include <time.h>
#include <math.h>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H


/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class CrazyRandomSword : public Weapon {

public:

    // hit points initialized to 0, update in constructor body
    CrazyRandomSword() : Weapon("crazy sword", 0) //Calls Weapon(name, hitpoints) constructor with values crazy sword and random value
    {
        // randomize hit points 7-100
        srand(time(0));
        hitPoints = (rand() % 93 + 7);
    }

    virtual ~CrazyRandomSword(){};

    virtual double hit(double armor);
    

};



#endif /* CRAZYRANDOMSWORD_H */

