#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main()
{
	// std::vector<int> container;
	std::deque<int> container;
	// std::list<int> container;

	for (int i = 0; i < 10; i++)
		container.push_back(i);
	try
	{
		std::cout << *(::easyfind(container, 1));
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}