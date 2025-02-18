#include "stattypes.hpp"
#include "statblock.hpp"
StatBlock::StatBlock(){
    strength = (stattype)1u;
    intellect = (stattype)1u;
}
StatBlock::StatBlock(stattype s, stattype i){
    strength = s;
    intellect = i;
}
stattype StatBlock::getStrength(){
    return strength;
}
void StatBlock::setStrength(stattype newStrength){
    strength = newStrength;
}
stattype StatBlock::getIntellect(){
    return intellect;
}
void StatBlock::setIntellect(stattype newIntellect){
    intellect = newIntellect;
}
