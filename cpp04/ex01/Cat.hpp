#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
		Brain *brain;
    public:
        Cat();
        Cat(Cat &origin);
        Cat &operator=(Cat &origin);
        ~Cat();

        void setType(std::string type);
        std::string getType() const;
        void  setBrain(Brain &brain);
        Brain &getBrain();

        void makeSound() const;
};
