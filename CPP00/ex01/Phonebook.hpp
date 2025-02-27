/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:09:49 by mloureir          #+#    #+#             */
/*   Updated: 2025/02/27 15:29:48 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cstdlib>
#include "contacts.hpp"

#define GREEN "\033[38;5;83m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define PRETTY "\033[38;5;69m"
#define RESET "\033[0m"

class Phonebook
{
	private:
		Contacts	list[8];
		int			n_contacts;
	public:
		void		book_menu(void);
		Contacts&	get_icontact(int id);
		void		show_contact(int id);
		void		set_n_contacts(int input);
		int			get_ncontacts(void) const;
		void		add_contact(int id, Contacts new_contact);
};
