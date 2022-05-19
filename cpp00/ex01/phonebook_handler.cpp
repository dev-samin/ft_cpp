/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_handler.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <samin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:43:08 by samin             #+#    #+#             */
/*   Updated: 2021/12/21 16:23:39 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook_handler.hpp"

machine::machine()
{
	for (int i = 0; i < 8; i++)
		book[i] = phone_book();
}

void machine::frame()
{
	while (1)
	{
		std::string command;
		std::cout << "명령 입력 : " << std::endl;
		std::cin >> command;

		if (command.compare("EXIT") == 0)
		{
			std::cout << "BUY";
			return;
		}
		else if (command.compare("ADD") == 0)
			add();
		else if (command.compare("SEARCH") == 0)
			search();
	}
}

void machine::add()
{
	int idx = count % 8;

	std::cout << "first_name : ";
	std::cin >> book[idx].first_name;
	std::cout << "last_name : ";
	std::cin >> book[idx].last_name;
	std::cout << "nickname : ";
	std::cin >> book[idx].nickname;
	std::cout << "darkest_secret : ";
	book[idx].set_darkest_secret();
	count++;
}

void machine::search()
{
	int idx = count < 8 ? count : 8;
	for (int i = 0; i < idx; i++)
		print(book[i]);
	std::cout << "which index do you wont know?" << std::endl;
	std::cin >> idx;
	if (idx > count - 1)
	{
		std::cout << "over range index!" << std::endl;
		return;
	}
	print(book[idx]);
}

void machine::cut_alignd(std::string str)
{
	if (str.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << '.';
	}
	else
		std::cout << str;
}

void machine::print(phone_book book)
{
	cut_alignd(book.first_name);
	std::cout << " | ";
	cut_alignd(book.last_name);
	std::cout << " | ";
	cut_alignd(book.nickname);
	std::cout << " | ";
	std::cout << book.get_darkest_secret();
	std::cout << std::endl;
}