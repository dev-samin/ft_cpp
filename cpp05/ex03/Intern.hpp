#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "form.h"

class Intern
{
	public:
		Intern();
		Intern(Intern &origin);
        Intern &operator=(const Intern& op);
		~Intern();
		Form *makeForm(std::string formName, std::string target);

	class NotFoundFormException : public std::exception
	{
		virtual const char *what() const throw();
	};
};