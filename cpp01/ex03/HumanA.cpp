#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(){}

HumanA::HumanA(std::string name, Weapon &weapon){
    setname(name);
    setWeapon(weapon);
}

HumanA::~HumanA(){}

void HumanA::setname(std::string name){
    this->name = name;
}

std::string HumanA::getname(){
    return (this->name);
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

Weapon HumanA::getWeapon()
{
    return (*this->weapon);
}

void HumanA::attack(){
    std::cout << name << " attacks with his " << getWeapon().getType() << std::endl;
}
