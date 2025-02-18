#pragma once
#include "hitpointtypes.hpp"
#include <iostream>
#include <algorithm>
class Hp{
    public:
        Hp() {currentHp = 1; maxHp = 1;}
        Hp(hptype cHp, hptype mHp) {
            if(setMaxHp(mHp)){
                if(setCurHp(cHp))
                    return;
                std::cerr << "set cur hp < 0";
            }
            std::cerr << "set max hp < 1";
        }
        bool setMaxHp(hptype newMaxHp){
            if(newMaxHp < 1)
                return false;

            maxHp = newMaxHp;
            currentHp = std::min<hptype>(maxHp, currentHp);
            
            return true;
        }
        bool setCurHp(hptype newCurHp){
            if(newCurHp < 0)
                return false;   

            currentHp = std::min<hptype>(maxHp, newCurHp);

            return true;        
        }

        void takeDamange(hptype damage){
            currentHp -= std::min<hptype>(currentHp, damage);

            return;
        }
        void heal(hptype amount){
            currentHp = std::min<hptype>(maxHp, currentHp + amount);

            return;
        }
        hptype getCurrentHp(){
            return currentHp;
        }
        hptype getMaxHp(){
            return maxHp;
        }
    private:
        hptype currentHp;
        hptype maxHp;



};