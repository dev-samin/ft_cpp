#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "no brain";
	}
};

Brain::Brain(std::string str)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = str;
	}
};

Brain::Brain(Brain &origin)
{
	*this = origin;
	std::cout << "copy_Constructors "
			  << "Brain " << std::endl;
}

Brain &Brain::operator=(Brain &origin)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = origin.ideas[i];
	}
	std::cout << "oreride= "
			  << "Brain " << std::endl;
	return (*this);
}

std::string Brain::getIdea(int idx)
{
	return(this->ideas[idx]);
}

void Brain::setIdea(int idx, std::string str)
{
	this->ideas[idx] = str;
}

Brain::~Brain(){}