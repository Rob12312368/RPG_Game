#pragma once
#include "stattypes.hpp"
class StatBlock{
public:
    StatBlock(){
        strength = (stattype)1u;
        intellect = (stattype)1u;
    }
    explicit StatBlock(stattype s, stattype i){
        strength = s;
        intellect = i;
    }
    stattype getStrength(){
        return strength;
    }
    void setStrength(stattype newStrength){
        strength = newStrength;
    }
    stattype getIntellect(){
        return intellect;
    }
    void setIntellect(stattype newIntellect){
        intellect = newIntellect;
    }
private:
    stattype strength;
    stattype intellect;



};