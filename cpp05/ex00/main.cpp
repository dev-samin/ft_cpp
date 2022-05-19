#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("hello", 1);
		std::cout << b << std::endl;
		b.inGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat c("world", 150);
		std::cout << c << std::endl;
		c.deGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
