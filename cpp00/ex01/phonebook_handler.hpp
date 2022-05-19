/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_handler.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <samin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:42:35 by samin             #+#    #+#             */
/*   Updated: 2021/10/20 20:14:49 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook_entity.hpp"

class machine
{
	public :
		int count;
		phone_book book[8];
		machine(void);
		void frame();
		void add();
		void search();
		void print(phone_book book);
		void cut_alignd(std::string str);
};
