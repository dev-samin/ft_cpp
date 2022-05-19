#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str; 
    std::string &stringREF = *stringPTR;

	stringREF= "hello";
	std::cout << str << std::endl;
    std::cout << stringPTR << " "<< *stringPTR << std::endl;
    std::cout << &stringREF << " " << stringREF << std::endl;


    return (0);
}
