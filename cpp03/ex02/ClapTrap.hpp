#include <iostream>

class ClapTrap{
    protected:
        std::string name;
        int hitPoint;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &other);
	    ~ClapTrap();
	    ClapTrap &operator=(ClapTrap const &copy);
        
        void setName(std::string name);
        std::string getName();
        void setHitPoint(int hitPoint);
        int getHitPoint();
        void setEnergyPoint(int energyPoint);
        int getEnergyPoint();
        void setAttackDamage(int attackDamage);
        int getAttackDamage();


        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
