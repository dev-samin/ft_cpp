#include <iostream>
#include <string>
#include <cmath>

// #include <stirng>
class Convert
{
	private:
		int type_f;
		int type_d;
		double t_value;
	public:
		Convert();
		Convert(Convert &origin);
		Convert &operator=(Convert &origin);
		~Convert();

		void convert_char(char *value);
		void convert_int(char *value);
		void convert_float(char *value);
		void convert_double(char *value);
		
		bool isNumber(char *value);
		
};
