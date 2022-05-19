#include <iostream>
// #include <string>

// using namespace std;

void print_low_to_big(char *s)
{

	std::string str = s;
	for (int i = 0; i < str.length(); i++)
		std::cout << (char)toupper(str[i]);
}


int main(int argc, char **argv)
{

	if (argc == 1 )
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			print_low_to_big(argv[i]);
	}
	return (0);
}