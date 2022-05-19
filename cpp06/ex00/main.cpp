#include <iostream>
#include "Convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	// std::cout << argv[1] << std::endl;
	Convert con;
	std::string num = argv[1];

	con.convert_char(argv[1]);
	con.convert_int(argv[1]);
	con.convert_float(argv[1]);
	con.convert_double(argv[1]);

	return(0);
}
