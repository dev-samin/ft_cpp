#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int const max)
{
	this->max = max;
}

Span::Span(Span &origin)
{
	*this = origin;
}

Span &Span::operator=(Span &origin)
{
	this->v = origin.v;
	this->max = origin.max;
	return (*this);
}

Span::~Span()
{
}

/*
This class will have a function to store a single number (addNumber),
that will be used to fill it.
Attempting to add a new number
if there are already N of them stored in the object
	is an error and should result in an exception.
*/
void Span::addNumber(unsigned int N)
{
	if (isnumber(N) != 0)
		throw (UnnumericException());
	if (this->max <= v.size())
		throw (OverSizeException());
	this->v.push_back(N);
}

void Span::addNumber(unsigned int S, unsigned int B)
{
	if (isnumber(S) != 0 || isnumber(B) != 0)
		throw (UnnumericException());
	for(unsigned int i = S; i <= B; i++) 
	{
		if (this->max <= v.size())
			throw (OverSizeException());
		this->v.push_back(i);
	}
}

void Span::iter()
{
	std::vector<unsigned int>::iterator itr;
	std::vector<unsigned int>::iterator itr_end;

	itr = this->v.begin();
	itr_end = this->v.end();

	while (itr < itr_end)
	{
		std::cout << *itr << " ";
		++itr;
	}
	std::cout << std::endl;
	

}


/*
You will now make two functions, shortestSpan and longestSpan, that will find out respectively the shortest and longest span between all the numbers contained in the object, and return it. If there are no numbers stored, or only one, there is no span to find, and you will throw an exception.
*/
int Span::shortestSpan()
{
	if (this->v.size() <= 1)
		throw (SingleContentException());

	int shortest = v[0] > v[1] ? v[0] - v[1] : v[1] - v[0];
	
	for (unsigned int i = 0; i < this->v.size() - 1; i++)
	{
		int tmp;
		
		tmp = v[i] > v[i + 1] ? v[i] - v[i + 1] : v[i + 1] - v[i];
		if (shortest > tmp)
			shortest = tmp;
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (this->v.size() <= 1)
		throw (SingleContentException());

	int longest = v[0] > v[1] ? v[0] - v[1] : v[1] - v[0];
	
	for (unsigned int i = 0; i < this->v.size() - 1; i++)
	{
		int tmp;

		tmp = v[i] > v[i + 1] ? v[i] - v[i + 1] : v[i + 1] - v[i];
		if (longest < tmp)
			longest = tmp;
	}
	return (longest);
}

const char *Span::OverSizeException::what() const throw()
{
	return "error: OverSizeException";
}

const char *Span::SingleContentException::what() const throw()
{
	return "error: SingleContentException";
}

const char *Span::UnnumericException::what() const throw()
{
	return "error: UnnumericException";
}
