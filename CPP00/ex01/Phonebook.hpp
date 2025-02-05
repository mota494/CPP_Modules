/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:09:49 by mloureir          #+#    #+#             */
/*   Updated: 2025/02/05 10:09:53 by mloureir         ###   ########.pt       */
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

class Phonebook
{
	private:
		Contacts	list[8];
		int			n_contacts;
	public:
		int			get_ncontacts(void) const;
};
