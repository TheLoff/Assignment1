/* 
 * File:   SimpleHammer.cpp
 * Author: Nick <ndl17>
 *  
 */

#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){
 
    double damage = 0.00;
    
    if(armor < 30){
        damage = hitPoints;
    }
    else
    damage = hitPoints - armor;
    
    if(damage < 0){
        return 0;
    }
    return damage;
}
