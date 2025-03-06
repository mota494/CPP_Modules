/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:09:50 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/06 08:54:20 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include "Utils.hpp"

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

std::string	Contacts::get_secr(void) const
{
	return (secret);
}

void	Contacts::set_id(int input)
{
	id = input;
}

void	Contacts::set_phone(std::string input)
{
	phone = input;
}

int		Contacts::get_id(void) const
{
	return id;
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

std::string	Contacts::setup_names(void)
{
	std::string buffer;

	while (1)
	{
		std::getline(std::cin, buffer);
		if (check_name(buffer) == 1)
			std::cout << "Input a valid name:";
		else
			return (buffer);
	}
}

void	Contacts::setup_number(void)
{
	std::string buffer;

	while (1)
	{
		std::getline(std::cin, buffer);
		if (check_number(buffer) == 1)
			std::cout << "Input a valid phone number:";
		else
		{
			set_phone(buffer);
			break;
		}
	}
}

void	Contacts::setup_dark(void)
{
	std::string buffer;

	while (1)
	{
		std::getline(std::cin, buffer);
		if (buffer.length() <= 0)
			std::cout << "Insert darkest secret:";
		else
		{
			set_secr(buffer);
			break;
		}
	}
}

void	Contacts::new_contact(void)
{
	signal(SIGINT, SIG_IGN);
	system("clear");
	std::cout << "Fill up new contact information\n";
	std::cout << "Insert first name:";
	set_firstn(setup_names());
	std::cout << "Insert last name:";
	set_lastn(setup_names());
	std::cout << "Insert nickname:";
	set_nick(setup_names());
	std::cout << "Insert phone number:";
	setup_number();
	std::cout << "Inset darkest secret:";
	setup_dark();
	signal(SIGINT, SIG_DFL);
}
