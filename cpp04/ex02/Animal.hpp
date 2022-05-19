#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal &origin);
        Animal &operator=(Animal &origin);
        virtual ~Animal();

        void setType(std::string type);
        virtual std::string getType() const;

        virtual void makeSound() const =0;
};

#endif