#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cstdlib>
#include "utils.hpp"

class Contacts {
	private:
		int			id;
		std::string phone;
		std::string firstname;
		std::string lastname;
		std::string nick;
		std::string	secret;
	public:
		void		set_firstn(std::string input);
		void		set_lastn(std::string input);
		void		set_nick(std::string input);
		void		set_secr(std::string input);
		void		set_phone(std::string input);
		void		set_id(int input);
		int			get_id(void) const;
		std::string	get_firstn(void) const;
		std::string	get_lastn(void) const;
		std::string get_nick(void) const;
		std::string get_secr(void) const;
		std::string get_phone(void) const;
		void		setup_firstname(void);
		void		setup_lastname(void);
		void		setup_nickname(void);
		void		setup_number(void);
		void		new_contact(void);
};
