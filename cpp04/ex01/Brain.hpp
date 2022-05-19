#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain &origin);
		Brain(std::string str);
		Brain &operator=(Brain &origin);
		
		std::string getIdea(int idx);
		void setIdea(int idx, std::string str);
		
		~Brain();
};

#endif