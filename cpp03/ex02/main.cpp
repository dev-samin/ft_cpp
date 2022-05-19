#include "FragTrap.hpp"

int main()
{
    FragTrap f("custom_FragTrap");
    
    std::cout << f.getEnergyPoint() << std::endl;
    f.attack("you!");
    f.beRepaired(10);
    std::cout << f.getEnergyPoint() << std::endl;
    f.takeDamage(10);
    std::cout << f.getEnergyPoint() << std::endl;
    f.highFivesGuys();
    
    return (0);
}
