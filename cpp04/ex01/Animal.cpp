#include "Animal.hpp"

Animal::Animal()
{
        this->type = "Animal";
        std::cout << "Constructors " << "Animal " <<  std::endl;
}

Animal::Animal(Animal &origin)
{
        *this = origin;
        std::cout << "copy_Constructors " << "Animal " << std::endl;
}

Animal &Animal::operator=(Animal &origin)
{
        this->type = origin.type;
        std::cout << "oreride= " << "Animal " << std::endl;
	return (*this);
}

Animal::~Animal()
{
        std::cout << "Destructor " << "Animal " << std::endl;
}

void Animal::setType(std::string type)
{
        this->type = type;
}

std::string Animal::getType() const
{
        return (this->type);
}

void Animal::makeSound() const
{
        std::cout << "makeSound " << "Animal " << "A Wuuuuuuuu" << std::endl;
}
