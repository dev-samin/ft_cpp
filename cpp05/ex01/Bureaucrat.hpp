#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade; // 1 ~ 150
	Bureaucrat();
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat &origin);
	Bureaucrat &operator=(Bureaucrat &origin);
	virtual ~Bureaucrat();

	std::string getName() const;
	int getGrade() const;

	void setGrade(int grade);
	void inGrade();
	void deGrade();
	
	void signForm(Form &form);

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif