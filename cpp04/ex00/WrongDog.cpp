#include "WrongDog.hpp"

WrongDog::WrongDog()
{
        this->type = "WrongDog";
        std::cout << "Constructors " << "WrongDog " <<  std::endl;
}

WrongDog::WrongDog(WrongDog &origin)
{
        *this = origin;
        std::cout << "copy_Constructors " << "WrongDog " << std::endl;
}

WrongDog &WrongDog::operator=(WrongDog &origin)
{
        this->type = origin.type;
        std::cout << "oreride=  " << "WrongDog " << std::endl;
		return (*this);
}

WrongDog::~WrongDog()
{
        std::cout << "Destructor " << "WrongDog " << std::endl;
}

void WrongDog::setType(std::string type)
{
        this->type = type;
}

std::string WrongDog::getType() const
{
        return (this->type);
}

void WrongDog::makeSound() const
{
        std::cout << "makeSound " << "WrongDog " << "Dooooooog" << std::endl;
}
