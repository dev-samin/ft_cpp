#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Form *form = NULL;

	try 
	{
		Bureaucrat bureaucrat("bureaucrat", 1);
		Intern intern;
		form = intern.makeForm("ShrubberyCreationForm", "target1");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete(form);
		form = NULL;
	}
	catch (std::exception &e)
	{
		if(form != NULL)
		{
			delete(form);
			form = NULL;
		}
		std::cout << e.what() << std::endl;
	}

	try 
	{
		Bureaucrat bureaucrat("bureaucrat", 1);
		Intern intern;
		form = intern.makeForm("RobotomyRequestForm", "target2");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete(form);
		form = NULL;

	}
	catch (std::exception &e)
	{
		if(form != NULL)
		{
			delete(form);
			form = NULL;
		}
		std::cout << e.what() << std::endl;	}

	try 
	{
		Bureaucrat bureaucrat("bureaucrat", 1);
		Intern intern;
		form = intern.makeForm("PresidentialPardonForm", "target3");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete(form);
		form = NULL;

	}
	catch (std::exception &e)
	{
		if(form != NULL)
		{
			delete(form);
			form = NULL;
		}
		std::cout << e.what() << std::endl;
	}

	try 
	{
		Bureaucrat bureaucrat("bureaucrat", 1);
		Intern intern;
		form = intern.makeForm("wrong", "target4");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete(form);
	}
	catch (std::exception &e)
	{
		if(form != NULL)
		{
			delete(form);
			form = NULL;
		}
		std::cout << e.what() << std::endl;
	}
}
