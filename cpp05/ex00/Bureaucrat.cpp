#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->grade = grade;
    std::cout << "Constructors " << "Bureaucrat " << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &origin) : name(origin.name), grade(origin.grade)
{
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

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

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
		

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratExceptionß Grade too Low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << "\nname : " << bureaucrat.getName() << "\nGrade : " << bureaucrat.getGrade() << std::endl;
	return (out);
}
