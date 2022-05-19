#include <iostream>

/*
Assume the T is a container of int,
and find the first occurrence of the second parameter in the first parameter.
*/

class ArrayException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return "error: There are no value";
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int find_value)
{
	typename T::iterator itr;
	itr = container.begin();

	while (itr != container.end())
	{
		if (*itr == find_value)
			return (itr);
		++itr;
	}
	throw(ArrayException());
	return (itr);
}