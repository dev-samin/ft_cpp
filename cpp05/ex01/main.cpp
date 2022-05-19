#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("hello", 4);
		std::cout << b << std::endl;
		
		Form f("report", 3, 3);
		std::cout << f << std::endl;
		
		b.signForm(f);
		std::cout << f << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
