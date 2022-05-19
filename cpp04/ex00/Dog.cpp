#include "Dog.hpp"

Dog::Dog()
{
        this->type = "Dog";
        std::cout << "Constructors " << "Dog " <<  std::endl;
}

Dog::Dog(Dog &origin)
{
        *this = origin;
        std::cout << "copy_Constructors " << "Dog " << std::endl;
}

Dog &Dog::operator=(Dog &origin)
{
        this->type = origin.type;
        std::cout << "oreride=  " << "Dog " << std::endl;
		return (*this);
}

Dog::~Dog()
{
        std::cout << "Destructor " << "Dog " << std::endl;
}

void Dog::setType(std::string type)
{
        this->type = type;
}

std::string Dog::getType() const
{
        return (this->type);
}

void Dog::makeSound() const
{
        std::cout << "makeSound " << "Dog " << "Dooooooog" << std::endl;
}
