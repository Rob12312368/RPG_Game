#pragma once
#include "hp.hpp"
#include "statblock.hpp"
class Rogue: public Hp, public StatBlock{
    public:
        static const hptype HP_GROWTH = (hptype)13u;
        static const stattype BASE_STR = (stattype)3u;
        static const stattype BASE_INT = (stattype)2u;
        Rogue():Hp(HP_GROWTH, HP_GROWTH), StatBlock(BASE_STR, BASE_INT){}
    private:


};