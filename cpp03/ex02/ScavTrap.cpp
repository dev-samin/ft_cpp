#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    setName("ScavTrapmake");
    setHitPoint(100);
    setEnergyPoint(50);
    setAttackDamage(20);

    // this->name = "ScavTrapmake";
    // this->hitPoint = 100;
    // this->energyPoints = 50;
    // this->attackDamage = 20;
    std::cout << "i am " << getName() << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    setName(name);
    setHitPoint(100);
    setEnergyPoint(50);
    setAttackDamage(20);
    setMode("none");
    // this->name = "ScavTrapmake";
    // this->hitPoint = 100;
    // this->energyPoints = 50;
    // this->attackDamage = 20;
    std::cout << "i am " << getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << "bye " << getName() << std::endl;
}

void ScavTrap::setMode(std::string mode) { this->mode = mode; }

std::string ScavTrap::getMode() { return (this->mode); }


void ScavTrap::guardGate()
{
    setMode("Gate keeper");
    std::cout << "changeMode to " << getMode() << std::endl;
}
