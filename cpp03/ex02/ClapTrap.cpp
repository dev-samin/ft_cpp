#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    setName("ClapTrap");
    setHitPoint(10);
    setEnergyPoint(10);
    setAttackDamage(0);

    std::cout << "i am " << name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    setName(name);
    setHitPoint(10);
    setEnergyPoint(10);
    setAttackDamage(0);

    std::cout << "i am " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << "bye " << getName() << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    setName(copy.name);
    return (*this);
}


void ClapTrap::setName(std::string name) { this->name = name; }

std::string ClapTrap::getName() { return (this->name); }

void ClapTrap::setHitPoint(int hitPoint) { this->hitPoint = hitPoint; }

int ClapTrap::getHitPoint() { return (this->hitPoint); }

void ClapTrap::setEnergyPoint(int energyPoints) { this->energyPoints = energyPoints; }

int ClapTrap::getEnergyPoint() { return (this->energyPoints); }

void ClapTrap::setAttackDamage(int attackDamage) { this->attackDamage = attackDamage; }

int ClapTrap::getAttackDamage() { return (this->attackDamage); }

void ClapTrap::attack(std::string const &target)
{
    std::cout << getName() << " attack " << target << std::endl;
    std::cout << target << " got damage " << getAttackDamage() << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    setEnergyPoint(getEnergyPoint() - amount);
    std::cout << getName() << " got damage " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    setEnergyPoint(getEnergyPoint() + amount);
    std::cout << getName() << " have repaired " << amount << std::endl;
}
