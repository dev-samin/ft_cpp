#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Constructors "
			  << "Dog " << std::endl;
}

Dog::Dog(Dog &origin)
{
	*this = origin;
	std::cout << "copy_Constructors "
			  << "Dog " << std::endl;
}

Dog &Dog::operator=(Dog &origin)
{
	this->type = origin.type;
	std::cout << "oreride=  "
			  << "Dog " << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Destructor "
			  << "Dog " << std::endl;
}

void  Dog::setBrain(Brain &brain)
{
	*this->brain = brain;
}

Brain &Dog::getBrain()
{
	return(*this->brain);
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
	std::cout << "makeSound "
			  << "Dog "
			  << "Doooooog" << std::endl;
}
