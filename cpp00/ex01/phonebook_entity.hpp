#include <iostream>

class  phone_book
{
	public :
				std::string first_name;
				std::string last_name;
				std::string nickname;
				std::string phone_number;
	private :
				std::string darkest_secret;
	public:
                void set_darkest_secret();
                std::string get_darkest_secret();
};
