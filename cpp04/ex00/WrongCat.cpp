#include "WrongCat.hpp"

WrongCat::WrongCat()
{
        this->type = "WrongCat";
        std::cout << "Constructors " << "WrongCat " <<  std::endl;
}

WrongCat::WrongCat(WrongCat &origin)
{
        *this = origin;
        std::cout << "copy_Constructors " << "WrongCat " << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &origin)
{
        this->type = origin.type;
        std::cout << "oreride=  " << "WrongCat " << std::endl;
		return (*this);
}

WrongCat::~WrongCat()
{
        std::cout << "Destructor " << "WrongCat " << std::endl;
}

void WrongCat::setType(std::string type)
{
        this->type = type;
}

std::string WrongCat::getType() const
{
        return (this->type);
}

void WrongCat::makeSound() const
{
        std::cout << "makeSound " << "WrongCat " << "caaaaaaaaat" << std::endl;
}
