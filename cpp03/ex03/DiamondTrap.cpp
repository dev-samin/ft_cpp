#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    this->name = "DiamondTrap";
    this->hitPoint = this->FragTrap::hitPoint;
    this->energyPoints = this->ScavTrap::energyPoints;
    this->attackDamage = this->FragTrap::attackDamage;
    
    std::cout << "constructor " << "DiamondTrap " << "i am " << this->name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), FragTrap(), ScavTrap()
{
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    this->hitPoint = this->FragTrap::hitPoint;
    this->energyPoints = this->ScavTrap::energyPoints;
    this->attackDamage = this->FragTrap::attackDamage;
    std::cout << "constructor " << "DiamondTrap " << "i am " << this->name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &origin)
{
    *this = origin;
    std::cout << "copy_constructor " << "DiamondTrap " << "i am " << this->name << std::endl;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &origin)
{
    this->name = origin.name;
    this->ClapTrap::name = origin.ClapTrap::name;
    this->hitPoint = FragTrap::hitPoint;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;

    std::cout << "oreride= " << "DiamondTrap " << "i am " << origin.name << std::endl;

    return (*this);
};

DiamondTrap::~DiamondTrap()
{
    std::cout << "destructor " << "DiamondTrap " << "bye " << this->name << std::endl;

}


void DiamondTrap::attack(std::string const &target)
{
    this->FragTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    this->ScavTrap::takeDamage(amount);

}

void DiamondTrap::beRepaired(unsigned int amount)
{
    this->ScavTrap::beRepaired(amount);
}


void DiamondTrap::whoAmI()
{
    std::cout << "hello I'm " << DiamondTrap::name << std::endl;

    std::cout << "ClapTrap is " << ClapTrap::name << std::endl;

}
