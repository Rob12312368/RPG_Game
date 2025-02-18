#pragma once
#include "hp.hpp"
#include "statblock.hpp"
class Warrior: public Hp, public StatBlock{
    public:
        static const hptype HP_GROWTH = (hptype)19u;
        static const stattype BASE_STR = (stattype)4u;
        static const stattype BASE_INT = (stattype)1u;
        Warrior():Hp(HP_GROWTH, HP_GROWTH), StatBlock(BASE_STR, BASE_INT){}
    private:


};