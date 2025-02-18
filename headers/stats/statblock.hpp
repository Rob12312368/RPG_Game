#pragma once
#include "stattypes.hpp"
class StatBlock{
public:
    StatBlock();
    explicit StatBlock(stattype s, stattype i);
    stattype getStrength();
    void setStrength(stattype newStrength);
    stattype getIntellect();
    void setIntellect(stattype newIntellect);
private:
    stattype strength;
    stattype intellect;



};