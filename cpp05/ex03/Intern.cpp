#include "Intern.hpp"

Intern::Intern(){};

Intern::Intern(Intern &origin)
{
	*this = origin;
};

Intern &Intern::operator=(const Intern& origin)
{
	if (this == &origin)
		return (*this); 
	return (*this);	
};

Intern::~Intern(){};

Form *Intern::makeForm(std::string formName, std::string target)
{
	int index = -1;
	Form * f = NULL;;
	std::string dic[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	
	for (int i = 0; i < 3; i++)
	{
		if (dic[i] == formName)
		{
			index = i;
			break;
		}
	}
	switch(index)
	{
		default:
		{
			throw(Intern::NotFoundFormException());
		}
		case 0: 
		{
			f = new ShrubberyCreationForm(target);
			break;
		}
		case 1:
		{
			f = new RobotomyRequestForm(target);
			break;
		}
		case 2:
		{
			f = new PresidentialPardonForm(target);
			break;
		}
	}
	std::cout << "Intern creates " << formName << std::endl;
	return (f);
}

const char *Intern::NotFoundFormException::what() const throw()
{
	return ("Intern can't find Form\n");
}