#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat &origin);
        Cat &operator=(Cat &origin);
        virtual ~Cat();

        void setType(std::string type);
        std::string getType() const;

        void makeSound() const;
};
