#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form(target, 25, 5)
{
	std::cout << "Constructors "
			  << "PresidentialPardonForm " << this->getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &origin)
	: Form(origin.getName(), origin.getSignGrade(), origin.getExecuteGrade())
{
	this->setCheckSign(origin.getCheckSign());
	std::cout << "copy_Constructors " <<  "PresidentialPardonForm " <<  this->getName() << std::endl;

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &origin)
{
	this->setCheckSign(origin.getCheckSign());
	std::cout << "oreride= " << "PresidentialPardonForm " << this->getName() << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor " << "PresidentialPardonForm " << this->getName() << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	std::cout << "PresidentialPardonForm::execute " << executor.getName() << std::endl;
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox" <<  std::endl;
}
