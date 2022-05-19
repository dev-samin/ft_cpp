#include "Karen.hpp"

int main(int argc, char *argv[])
{
    Karen karen;
	std::string str;

    if (argc != 2)
         return(-1);
	str = argv[1];
	for (int i = 0; i < (int)str.length(); i++)
		str[i] = tolower(str[i]);
    karen.complain(str);
    return (0);
}
