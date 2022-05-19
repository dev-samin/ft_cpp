#include "Span.hpp"

int main()
{
	try
	{
		Span sp(100);
		// sp.addNumber('5');
		sp.addNumber(1000);
		sp.addNumber(11);
		sp.addNumber(14);
		sp.addNumber(12);
		sp.addNumber(10000);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.addNumber(0, 94);
		std::cout << std::endl;

		sp.iter();
		std::cout << std::endl;
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cout <<e.what() << std::endl;
	}
	
	
}
