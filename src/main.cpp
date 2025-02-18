#include <iostream>
#include "warrior.hpp"
#include "wizard.hpp"
#include "rogue.hpp"
#include "cleric.hpp"

int main(){
    Warrior war1;
    Wizard wiz1;
    Rogue rog1;
    Cleric cle1;

    std::cout << "Warrior\n" 
                << "-MaxHp: " << war1.getMaxHp() << "\n"
                << "-Strength: " << war1.getStrength() << "\n"
                << "-Intellect: " << war1.getIntellect() << "\n";

    std::cout << "Wizard\n" 
                << "-MaxHp: " << wiz1.getMaxHp() << "\n"
                << "-Strength: " << wiz1.getStrength() << "\n"
                << "-Intellect: " << wiz1.getIntellect() << "\n";

    std::cout << "Rogue\n" 
                << "-MaxHp: " << rog1.getMaxHp() << "\n"
                << "-Strength: " << rog1.getStrength() << "\n"
                << "-Intellect: " << rog1.getIntellect() << "\n";

    std::cout << "Cleric\n" 
                << "-MaxHp: " << cle1.getMaxHp() << "\n"
                << "-Strength: " << cle1.getStrength() << "\n"
                << "-Intellect: " << cle1.getIntellect() << "\n";
  

}