#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class Weapon;

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void setname(std::string name);
        std::string getname();
        void setWeapon(Weapon &weapon);
        Weapon getWeapon();
        void attack();
};

#endif
