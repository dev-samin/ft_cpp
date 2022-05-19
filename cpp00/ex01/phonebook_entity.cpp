/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_entity.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <samin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:15:25 by samin             #+#    #+#             */
/*   Updated: 2021/10/21 18:04:09 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook_entity.hpp"

void phone_book::set_darkest_secret()
{
	std::cin >> darkest_secret;
}

std::string phone_book::get_darkest_secret()
{
	return (darkest_secret);
}
