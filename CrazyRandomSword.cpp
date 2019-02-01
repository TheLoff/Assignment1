/* 
 * File:   CrazyRandomSword.cpp
 * Author: Nick <ndl17>
 *  
 */

#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
 
    // armor may be ignored. calculates armor penalty
    armor -=(rand() % 10 - 1);
    
   double damage = hitPoints - armor;
    
    if(damage < 0){
        return 0;
    }
    return damage;
}
