#include "Convert.hpp"

Convert::Convert()
{
	this->type_d = 0;
	this->type_f = 0;
	this->t_value = 0;
}

Convert::Convert(Convert &origin) 
{
	this->type_d = origin.type_d;
	this->type_f = origin.type_f;
	this->t_value = origin.t_value;
}

Convert &Convert::operator=(Convert &origin)
{
	this->type_d = origin.type_d;
	this->type_f = origin.type_f;
	this->t_value = origin.t_value;
	return (*this);
}

Convert::~Convert() {}

void Convert::convert_char(char *value)
{
	this->type_d = 0;
	this->type_f = 0;
	this->t_value = std::atof(value);

	if (t_value < std::numeric_limits<char>::min() || t_value > std::numeric_limits<char>::max() || std::isnan(t_value))
	{
		std::cout << "char: "
				  << "impossible" << std::endl;
		return;
	}

	if (!std::isprint(t_value))
	{
		std::cout << "char: "
				  << "Non displayable" << std::endl;
		return;
	}
	std::cout << "char: " << "'" << static_cast<char>(t_value) << "'" << std::endl;
}

void Convert::convert_int(char *value)
{
	this->type_d = 0;
	this->type_f = 0;
	this->t_value = std::atof(value);

	if (t_value < std::numeric_limits<int>::min() || t_value > std::numeric_limits<int>::max() || std::isnan(t_value))
	{
		std::cout << "int: "
				  << "impossible" << std::endl;
		return;
	}

	if (isNumber(value) == false)
	{
		std::cout << "int: " << "It's not a number" << std::endl;
		return;
	}
	std::cout << "int: " << static_cast<int>(t_value) << std::endl;
}

void Convert::convert_float(char *value)
{
	this->type_d = 0;
	this->type_f = 0;
	this->t_value = std::atof(value);

	if (isNumber(value) == false)
	{
		std::cout << "float: " << "It's not a number" << std::endl;
		return;
	}
	if (t_value > 0)
		std::cout << "float: " 
		<< ((static_cast<float>(t_value) > std::numeric_limits<float>::max()) ? "+" : "")
		<< static_cast<float>(t_value)
		<< (static_cast<float>(t_value) - static_cast<int>(t_value) != (float)0 ? "f" : ".0f")
		<< std::endl;
	else
		std::cout << "float: " 
		<< static_cast<float>(t_value) 
		<< (static_cast<float>(t_value) - static_cast<int>(t_value) != (float)0 ? "f" : ".0f")
		<< std::endl;
}

void Convert::convert_double(char *value)
{
	this->type_d = 0;
	this->type_f = 0;
	this->t_value = std::atof(value);

	if (isNumber(value) == false)
	{
		std::cout << "double: " << "double: It's not a number" << std::endl;
		return;
	}
	if (t_value > 0)
		std::cout << "double: " 
		<< ((t_value > std::numeric_limits<double>::max()) ? "+" : "")  
		<< static_cast<double>(t_value)
		<< (static_cast<double>(t_value) - static_cast<int>(t_value) != (double)0 ? "" : ".0")
		<< std::endl;
	else
		std::cout << "double: " 
		<< static_cast<double>(t_value)
		<< (static_cast<double>(t_value) - static_cast<int>(t_value) != (double)0 ? "" : ".0")
		<< std::endl;
}

bool Convert::isNumber(char *value)
{
	std::string tmp = value;
	int value_len = tmp.length();
	float t_value = std::atof(value);

	if (std::isinf(t_value) || std::isnan(t_value))
		return (true);
	if (value == NULL)
		return (false);
	for (int i = 0; i < value_len; i++)
	{
		if (value[i] == 'f')
			this->type_f++;
		if (isdigit(value[i] - '0'))
		{
			if (value[i] == 'f')
			{
				if (i != value_len - 1)
					return (false);
				if (this->type_f > 1)
					return (false);
			}
			else
				return (false);
		}
	}
	return (true);
}
