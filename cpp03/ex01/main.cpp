#include "ScavTrap.hpp"

int main()
{
    ScavTrap s("custom_ScavTrap");
    std::cout << s.getEnergyPoint() << std::endl;
    s.attack("you!");
    s.beRepaired(10);
    std::cout << s.getEnergyPoint() << std::endl;
    s.takeDamage(10);
    std::cout << s.getEnergyPoint() << std::endl;
    s.guardGate();
    std::cout << s.getMode() << std::endl;
    return (0);
}
