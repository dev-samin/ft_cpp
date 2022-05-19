#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	std::cout << "Constructors " << "RobotomyRequestForm " << this->getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &origin) 
	:Form(origin.getName(), origin.getSignGrade(), origin.getExecuteGrade())
{
	this->setCheckSign(origin.getCheckSign());
	std::cout << "copy_Constructors " <<  "RobotomyRequestForm " <<  this->getName() << std::endl;

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &origin)
{
	this->setCheckSign(origin.getCheckSign());
	std::cout << "oreride= " << "RobotomyRequestForm " << this->getName() << std::endl;

	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor " << "RobotomyRequestForm " << this->getName() << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::cout << "RobotomyRequestForm::execute " << executor.getName() << std::endl;
	
	srand(time(NULL));
	if(rand() % 2 == 1)
		std::cout << this->getName() << "  has been robotomized successfully" <<  std::endl;
	else
		std::cout << "failure" << std::endl;
	
	
}
