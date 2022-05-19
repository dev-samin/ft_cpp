#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string name)
{
	setname(name);
}

HumanB::~HumanB() {}

void HumanB::setname(std::string name)
{
	this->name = name;
}

std::string HumanB::getname()
{
	return (this->name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

Weapon HumanB::getWeapon()
{
	return (*this->weapon);
}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << getWeapon().getType() << std::endl;
}
