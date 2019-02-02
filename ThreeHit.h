/* 
 * File:   CrazyRandomSword.h
 * Author: Nick <ndl17>
 * 
 * Created on September 25, 2017, 3:31 PM
 */

#include <string>
#include "Weapon.h"
#include <time.h>

#ifndef THREEHIT_H
#define THREEHIT_H


/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class ThreeHit : public Weapon {

public:

    // hit points initialized to 0, update in constructor body
    ThreeHit() : Weapon("troll", 0) //Calls Weapon(name, hitpoints) constructor with values crazy sword and random value
    {
        
    }

    virtual ~ThreeHit(){};
    
   
    virtual double hit(double  armor);
    

};



#endif /* CRAZYRANDOMSWORD_H */

