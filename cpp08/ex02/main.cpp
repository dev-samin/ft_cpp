#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Top " << mstack.top() << std::endl;
	std::cout << "size " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it_begin = mstack.begin();
	MutantStack<int>::iterator it_end = mstack.end();
	++it_begin;
	--it_begin;
	while (it_begin != it_end)
	{
		std::cout << *it_begin << std::endl;
		++it_begin;
	}
	std::stack<int> s(mstack);
	return 0;
}