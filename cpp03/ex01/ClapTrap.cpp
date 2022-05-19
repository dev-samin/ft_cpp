#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "ClapTrap";
    this->hitPoint = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "constructor "
              << "ClapTrap "
              << "i am " << this->name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoint = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "constructor "
              << "ClapTrap "
              << "i am " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &origin)
{
    *this = origin;
    std::cout << "copy_constructor "
              << "ClapTrap "
              << "i am " << origin.name << std::endl;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &origin)
{
    this->name = origin.name;
    this->hitPoint = origin.hitPoint;
    this->energyPoints = origin.energyPoints;
    this->attackDamage = origin.attackDamage;

    std::cout << "oreride= "
              << "ClapTrap "
              << "i am " << origin.name << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor "
              << "ClapTrap "
              << "bye " << this->name << std::endl;
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
    std::cout << "ClapTrap " << getName() << " attack " << target << std::endl;
    std::cout << "ClapTrap " << target << " got damage " << getAttackDamage() << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints < 0)
    {
        std::cout << "ClapTrap " << getName() << "energyPoints is 0" << std::endl;
        return;
    }
    setEnergyPoint(getEnergyPoint() - amount);
    std::cout << "ClapTrap " << getName() << " got damage " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    setEnergyPoint(getEnergyPoint() + amount);
    std::cout << "ClapTrap " << getName() << " have repaired " << amount << std::endl;
}
