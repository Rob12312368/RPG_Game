#pragma once
#include "hitpointtypes.hpp"
#include <iostream>
#include <algorithm>
class Hp{
    public:
        Hp();
        Hp(hptype cHp, hptype mHp);
        bool setMaxHp(hptype newMaxHp);
        bool setCurHp(hptype newCurHp);
        void takeDamage(hptype damage);
        void heal(hptype amount);
        hptype getCurrentHp();
        hptype getMaxHp();
    private:
        hptype currentHp;
        hptype maxHp;



};