#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog &origin);
        Dog &operator=(Dog &origin);
        virtual ~Dog();

        void setType(std::string type);
        std::string getType() const;

        void makeSound() const;
};
