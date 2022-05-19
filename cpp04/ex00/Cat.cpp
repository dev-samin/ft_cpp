#include "Cat.hpp"

Cat::Cat()
{
        this->type = "Cat";
        std::cout << "Constructors " << "Cat " <<  std::endl;
}

Cat::Cat(Cat &origin)
{
        *this = origin;
        std::cout << "copy_Constructors " << "Cat " << std::endl;
}

Cat &Cat::operator=(Cat &origin)
{
        this->type = origin.type;
        std::cout << "oreride=  " << "Cat " << std::endl;
		return (*this);
}

Cat::~Cat()
{
        std::cout << "Destructor " << "Cat " << std::endl;
}

void Cat::setType(std::string type)
{
        this->type = type;
}

std::string Cat::getType() const
{
        return (this->type);
}

void Cat::makeSound() const
{
        std::cout << "makeSound " << "Cat " << "caaaaaaaaat" << std::endl;
}
