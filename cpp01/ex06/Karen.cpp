#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen() {}

void Karen::complain(std::string level)
{
    std::string dic[4] = {"debug", "info", "warning", "error"};
    int idx = -1;

	for (int i = 0; i < 4; i++)
	{
		if (dic[i] == level)
		{
			idx = i;
			break;
		}
	}
    switch (idx)
    {
    default:
        exception();
		break;
    case 0:
        debug();
    case 1:
        info();
    case 2:
        warning();
    case 3:
        error();
    }
}

void Karen::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::exception(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
