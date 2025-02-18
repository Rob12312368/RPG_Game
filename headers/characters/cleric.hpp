#pragma once
#include "hp.hpp"
#include "statblock.hpp"
class Cleric: public Hp, public StatBlock{
    public:
        static const hptype HP_GROWTH = (hptype)14u;
        static const stattype BASE_STR = (stattype)2u;
        static const stattype BASE_INT = (stattype)3u;
        Cleric():Hp(HP_GROWTH, HP_GROWTH), StatBlock(BASE_STR, BASE_INT){}
    private:


};