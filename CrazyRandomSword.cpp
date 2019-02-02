/* 
 * File:   CrazyRandomSword.cpp
 * Author: Nick <ndl17>
 *  
 */

#include "CrazyRandomSword.h"
using namespace std;
#include <cstdlib>
#include <iostream>

double CrazyRandomSword::hit(double armor){
    
    /*
     up to 1/3 armor may be ignored. calculates armor penalty
    We use rand function to calculate value between 1 -10.
    If value < 3 - automatic ignore 2 armor.
    If value == 3 - ignore 1/3 armor, calculated
    Else value will equal fraction less than 1/3rd

     */
    // get random value 1 - 10
   double check = static_cast<double>(rand() % 10 + 1);
 
    if(check < 3){
        armor -= 2 ;
    }
    else if(check == 3){
        armor = armor - (floor(armor * (1.00/3.00)));
    }
    else{
        armor = armor - (floor( (armor * (1.00/check) )));
    }
   double damage = hitPoints - armor;
    
    if(damage < 0){
        return 0;
    }
    return damage;
}
