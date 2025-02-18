#pragma once
#include "hp.hpp"
#include "statblock.hpp"
class Wizard: public Hp, public StatBlock{
    public:
        static const hptype HP_GROWTH = (hptype)9u;
        static const stattype BASE_STR = (stattype)1u;
        static const stattype BASE_INT = (stattype)4u;
        Wizard():Hp(HP_GROWTH, HP_GROWTH), StatBlock(BASE_STR, BASE_INT){}
    private:


};