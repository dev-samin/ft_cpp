#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		/* data */
		std::vector<unsigned int> v;
		unsigned int max;
		Span();
	public:
		Span(unsigned int const max);
		Span(Span &origin);
		Span &operator=(Span &origin);
		~Span();
		
		void addNumber(unsigned int N);
		void addNumber(unsigned int S, unsigned int B);
		int shortestSpan();
		int longestSpan();
		
		void iter();
		class OverSizeException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class SingleContentException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class UnnumericException : public std::exception
		{
			public:
				const char *what() const throw();
		};

};

#endif