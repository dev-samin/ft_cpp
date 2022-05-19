#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(Dog &origin);
        Dog &operator=(Dog &origin);
        ~Dog();

        void setType(std::string type);
        std::string getType() const;

        void setBrain(Brain &brain);
        Brain &getBrain();

        void makeSound() const;
};
