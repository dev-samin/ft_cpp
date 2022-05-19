#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d("custom_DiamondTrap");

    std::cout << d.getEnergyPoint() << std::endl;
    d.whoAmI();
    d.attack("you!");

    d.attack("you!"); 

    d.beRepaired(10);
    std::cout << d.getEnergyPoint() << std::endl;
    d.takeDamage(10);
    std::cout << d.getEnergyPoint() << std::endl;
    d.highFivesGuys();
    
    return (0);
}
