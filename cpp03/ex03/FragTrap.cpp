#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->name = "FragTrap";
    this->hitPoint = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "i am " << getName() << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hitPoint = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "i am " << getName() << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap "
              << "bye " << getName() << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << this->name << " attack " << target << std::endl;
    std::cout << "FragTrap " << target << " got damage " << this->attackDamage << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints < 0)
    {
        std::cout << "FragTrap " << this->name << "energyPoints is 0" << std::endl;
        return;
    }
    this->energyPoints -= amount;
    std::cout << "FragTrap " << this->name << " got damage " << amount << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->energyPoints += amount;
    std::cout << "FragTrap " << this->name << " have repaired " << amount << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " give a hifive." << std::endl;
}
