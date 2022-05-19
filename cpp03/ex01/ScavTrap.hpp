#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        std::string mode;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();

        void setMode(std::string mode);
        std::string getMode();

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();
};