#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("custom_ClapTrap");
    c.attack("you!");
    c.beRepaired(10);
    std::cout << c.getEnergyPoint() << std::endl;
    c.takeDamage(10);
    std::cout << c.getEnergyPoint() << std::endl;
    return (0);
}
