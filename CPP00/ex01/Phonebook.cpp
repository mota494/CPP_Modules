/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:09:48 by mloureir          #+#    #+#             */
/*   Updated: 2025/02/25 11:06:54 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "contacts.hpp"

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

Contacts Phonebook::get_icontact(int id) const
{
	return (list[id]);
}

void	Phonebook::book_menu(void)
{
	phonebook_header();
}

void	Phonebook::add_contact(int id, Contacts new_contact)
{
	if (get_ncontacts() < 8)
		set_n_contacts(get_ncontacts() + 1);
	list[id] = new_contact;
}
