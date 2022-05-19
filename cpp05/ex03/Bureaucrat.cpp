#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->grade = grade;
    std::cout << "Constructors " << "Bureaucrat " <<  std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &origin)
{
	*this = origin;
	std::cout << "copy_Constructors " << "Bureaucrat " <<  std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &origin)
{
	this->grade = origin.grade;
	std::cout << "oreride=  " << "Bureaucrat " << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor " << "Bureaucrat " << std::endl;
}

std::string Bureaucrat::getName() const { return (this->name); }

int Bureaucrat::getGrade() const { return (this->grade); }

void Bureaucrat::inGrade()
{
	if (this->grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->grade -= 1;
}

void Bureaucrat::deGrade()
{
	if (this->grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade += 1;
}

void Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
	form.setCheckSign(true);
	std::cout << this->getName() <<" signs " << form.getName()<< std::endl;
}

void Bureaucrat::executeForm(Form const & form)
{
	std::cout << "executeForm " << "Bureaucrat " << std::endl;

	form.beExecute(*this); 
	form.execute(*this);
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratExceptionß Grade too Low\n";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << "\nname : " << bureaucrat.getName() << "\nGrade : " << bureaucrat.getGrade() << std::endl;
	return (out);
}
