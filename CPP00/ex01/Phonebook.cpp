/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:09:48 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/06 08:55:02 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contacts.hpp"
#include <iomanip>

void	phonebook_header(void)
{
	std::cout << PRETTY;
	std::cout << "▗▖   ▗▄▄▄▖ ▗▄▄▖▗▄▄▄▖\n";
	std::cout << "▐▌     █  ▐▌     █\n";
	std::cout << "▐▌     █   ▝▀▚▖  █\n";
	std::cout << "▐▙▄▄▖▗▄█▄▖▗▄▄▞▘  █\n";
	std::cout << RESET;
}

void	Phonebook::set_n_contacts(int input)
{
	n_contacts = input;
}

int		Phonebook::get_ncontacts(void)	const
{
	return (n_contacts);
}

Contacts& Phonebook::get_icontact(int id)
{
	return (list[id]);
}

void	Phonebook::show_contact(int id)
{
	Contacts&	t_contact = get_icontact(id);
	int			n_contact = get_ncontacts();

	if (id < 0 || id > n_contact)
	{
		system("clear");
		std::cout << RED << "No contact with that ID, press Enter to continue" << RESET;
		std::cin.ignore();
	}
	else
	{
		system("clear");
		std::cout << std::right << "First name:" << t_contact.get_firstn() << "\n";
		std::cout << std::right << "Last name:" << t_contact.get_lastn() << "\n";
		std::cout << std::right << "Nickname:" << t_contact.get_nick() << "\n";
		std::cout << std::right << "Phonenumber:" << t_contact.get_phone() << "\n";
		std::cout << std::right << "Secret:" << t_contact.get_secr() << "\n";
		std::cout << GREEN << "Press Enter to continue" << RESET;
		std::cin.ignore();
	}
}

std::string	tunca(std::string original)
{
	if (original.length() > 9)
		return (original.substr(0,9) + ".");
	else
		return (original);
}

void	Phonebook::book_menu(void)
{
	phonebook_header();
	
	int	id = 0, n_contacts = get_ncontacts();
	std::string buffer;

	std::cout << "Your contacts:\n";
	std::cout << "|";
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << "|\n";
	while (id < n_contacts)
	{
		Contacts& t_contact = get_icontact(id);
		std::cout << "|" << std::right << std::setw(10) << t_contact.get_id() << "|";
		std::cout << std::right << std::setw(10) << tunca(t_contact.get_firstn()) << "|";
		std::cout << std::right << std::setw(10) << tunca(t_contact.get_lastn()) << "|";
		std::cout << std::right << std::setw(10) << tunca(t_contact.get_nick()) << "|\n";
		id++;
	}
	std::cout << "|" << std::right << std::setw(10) << id << "|";
	std::cout << std::right << std::setw(10) << "Back|\n";
	while (1)
	{
		std::cout << "Choose an index:";
		std::getline(std::cin, buffer);
		if (check_opt(buffer) == 0)
		{
			if (strtoi(buffer) == id)
				break;
			show_contact(strtoi(buffer));
			break;
		}
	}
}

void	Phonebook::add_contact(int id, Contacts new_contact)
{
	if (get_ncontacts() < 8)
		set_n_contacts(get_ncontacts() + 1);
	list[id] = new_contact;
}
