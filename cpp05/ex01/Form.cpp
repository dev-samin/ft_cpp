#include "Form.hpp"

Form::Form(const std::string formName, int signGrade, int executeGrade) : formName(formName), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade > 150 || executeGrade > 150)
	{
		throw (Form::GradeTooLowException());
		std::cout << signGrade << "  " << executeGrade << std::endl;
	}
	else if (signGrade < 1 || executeGrade < 1)
	{
		throw (Form::GradeTooHighException());
		std::cout << signGrade << "  " <<executeGrade << std::endl;
	}
	this->checkSign = false;
	std::cout << "Constructors "
			  << "Form " << std::endl;
}

Form::Form(Form &origin) : formName(origin.formName), signGrade(origin.signGrade), executeGrade(origin.executeGrade)
{
	this->setCheckSign(origin.getCheckSign());
	std::cout << "copy_Constructors "
			  << "Form " << std::endl;
}

Form &Form::operator=(Form &origin)
{
	this->setCheckSign(origin.getCheckSign());
	std::cout << "oreride=  "
			  << "Form " << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor "
			  << "Form " << std::endl;
}

std::string Form::getName() const { return (this->formName); }
bool Form::getCheckSign() const { return (this->checkSign); }
int Form::getSignGrade() const { return (this->signGrade); }
int Form::getExecuteGrade() const { return (this->executeGrade); }

void Form::setCheckSign(bool checkSign) { this->checkSign = checkSign; }


void Form::beSigned(Bureaucrat &Bureaucrat)
{
	if (this->signGrade >= Bureaucrat.getGrade())
		this->checkSign = true;
	else
		throw(Form::GradeTooLowException());
	std::cout << "beSigned" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("<bureaucrat> cannot sign <form> because <TooHigh grade>");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("<bureaucrat> cannot sign <form> because <TooLow grade>");
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "Form "
		<< "\nname : " << form.getName() 
		<< "\nsignGrade : " << form.getSignGrade() 
		<< "\nexecuteGrade : " << form.getExecuteGrade()
		<< "\ncheckSign : " << form.getCheckSign()
		<< std::endl;
	return (out);
}
