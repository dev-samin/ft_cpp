#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class Weapon;

class HumanA
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanA();
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void setname(std::string name);
        std::string getname();
        void setWeapon(Weapon &weapon);
        Weapon getWeapon();
        void attack();
};

#endif