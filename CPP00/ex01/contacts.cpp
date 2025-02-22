/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:09:50 by mloureir          #+#    #+#             */
/*   Updated: 2025/02/05 10:29:59 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

void	Contacts::set_firstn(std::string input)
{
	firstname = input;
}

void	Contacts::set_lastn(std::string input)
{
	lastname = input;
}

void	Contacts::set_nick(std::string input)
{
	nick = input;
}

void	Contacts::set_secr(std::string input)
{
	secret = input;
}

void	Contacts::set_phone(std::string input)
{
	phone = input;
}

std::string	Contacts::get_firstn(void) const
{
	return firstname;
}

std::string	Contacts::get_lastn(void) const
{
	return lastname;
}

std::string	Contacts::get_nick(void) const
{
	return nick;
}

std::string	Contacts::get_phone(void) const
{
	return phone;
}

void	Contacts::setup_firstname(void)
{
	std::string	buffer;

	while (1)
	{
		std::getline(std::cin, buffer);
		if (check_name(buffer) == 1)
			std::cout << "Input a valid name:";
		else
		{
			set_firstn(buffer);
			break;
		}
	}
}

void	Contacts::new_contact(void)
{
	system("clear");
	std::cout << "Fill up new contact information\n";
	std::cout << "Input first name:";
	setup_firstname();
}
