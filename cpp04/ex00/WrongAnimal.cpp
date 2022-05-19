#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
        this->type = "WrongAnimal";
        std::cout << "Constructors " << "WrongAnimal " <<  std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &origin)
{
        *this = origin;
        std::cout << "copy_Constructors " << "WrongAnimal " << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &origin)
{
        this->type = origin.type;
        std::cout << "oreride=  " << "WrongAnimal " << std::endl;
		return (*this);
}

WrongAnimal::~WrongAnimal()
{
        std::cout << "Destructor " << "WrongAnimal " << std::endl;
}

void WrongAnimal::setType(std::string type)
{
        this->type = type;
}

std::string WrongAnimal::getType() const
{
        return (this->type);
}

void WrongAnimal::makeSound() const
{
        std::cout << "makeSound " << "WrongAnimal " << "WrongAnimalllll" << std::endl;
}
