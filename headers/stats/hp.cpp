#include "hp.hpp"
Hp::Hp() : currentHp(1), maxHp(1) {}
Hp::Hp(hptype cHp, hptype mHp){
    if(setMaxHp(mHp)){
        if(setCurHp(cHp))
            return;
        std::cerr << "set cur hp < 0";
    }
    std::cerr << "set max hp < 1";
}
bool Hp::setMaxHp(hptype newMaxHp){
    if(newMaxHp < 1)
        return false;

    maxHp = newMaxHp;
    currentHp = std::min<hptype>(maxHp, currentHp);
    
    return true;
}

bool Hp::setCurHp(hptype newCurHp){
    if(newCurHp < 0)
        return false;   

    currentHp = std::min<hptype>(maxHp, newCurHp);

    return true;        
}

void Hp::takeDamage(hptype damage){
    currentHp -= std::min<hptype>(currentHp, damage);

    return;
}
void Hp::heal(hptype amount){
    currentHp = std::min<hptype>(maxHp, currentHp + amount);

    return;
}
hptype Hp::getCurrentHp(){
    return currentHp;
}
hptype Hp::getMaxHp(){
    return maxHp;
}