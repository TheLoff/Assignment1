/* 
 * File:   CrazyRandomSword.cpp
 * Author: Nick <ndl17>
 *  
 */

#include "ThreeHit.h"
#include <algorithm>
using namespace std;
#include <cstdlib>
#include <iostream>

double ThreeHit::hit(double armor){
    
    /*
     Weapon causes three hits, which the max value is used.
     if  (hit 1 + hit two)- hit three = 0, all armor is ignored.
     
    */
    // hold each hit
    double hitArr[3];
    
    // calculate hit damage 3 times
    srand(time(0));
    for(auto i =0; i <3; ++i){
        hitArr[i] = static_cast<double>(rand() % 90 +1);
    }
    
    // if sum of all three iterations == zero, all armor is ignored
    if( (hitArr[0] + hitArr[1]) - hitArr[2] == 0){
        armor -=armor;
    }
    
    double damage = *std::max_element(hitArr, hitArr+3) - armor;
    if (damage < 0) {
        return 0;
    }
    
    return damage;

}
