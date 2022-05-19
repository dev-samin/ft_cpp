#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try 
	{
		Bureaucrat bureaucrat("bureaucrat", 1);
		ShrubberyCreationForm ShrubberyCreationForm("Target01");
		RobotomyRequestForm RobotomyRequestForm("Target02");
		PresidentialPardonForm PresidentialPardonForm("Target03");

		bureaucrat.signForm(ShrubberyCreationForm);
		bureaucrat.executeForm(ShrubberyCreationForm); 

		bureaucrat.signForm(RobotomyRequestForm);
		bureaucrat.executeForm(RobotomyRequestForm); 		

		bureaucrat.signForm(PresidentialPardonForm);
		bureaucrat.executeForm(PresidentialPardonForm); 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
