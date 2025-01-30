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
