#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat; 

class Form
{
private:
	const std::string formName;
	const int signGrade;
	const int executeGrade;
	bool checkSign;
public:
	Form(const std::string formName, int signGrade, int executeGrade);
	Form(Form &origin);
	Form &operator=(Form &origin);
	virtual ~Form();
	
	std::string getName() const;
	bool getCheckSign() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	void setCheckSign(bool checkSign);


	void beSigned(Bureaucrat &Bureaucrat); //사이가능한지 채크하고 안되면 예외던지기

	void beExecute(Bureaucrat &Bureaucrat) const; 

	virtual void execute(Bureaucrat const &executor) const = 0;
	
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream &out, Form const &Form);

#endif