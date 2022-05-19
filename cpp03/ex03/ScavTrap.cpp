#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "ScavTrap";
    this->hitPoint = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "i am " << this->name << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hitPoint = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "i am " << this->name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap "
              << "bye " << this->name << std::endl;
}

void ScavTrap::setMode(std::string mode) { this->mode = mode; }

std::string ScavTrap::getMode() { return (this->mode); }

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->name << " attack " << target << std::endl;
    std::cout << "ScavTrap " << target << " got damage " << this->attackDamage << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints < 0)
    {
        std::cout << "ScavTrap " << this->name
                  << "energyPoints is 0" << std::endl;
        return;
    }
    this->energyPoints -= amount;
    std::cout << "ScavTrap " << this->name << " got damage " << amount << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    this->energyPoints += amount;
    std::cout << "ScavTrap " << this->name << " have repaired " << amount << std::endl;
}

void ScavTrap::guardGate()
{
    setMode("Gate keeper");
    std::cout << "ScavTrap "
              << "changeMode to " << getMode() << std::endl;
}
