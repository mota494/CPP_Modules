#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cstdlib>

class Contacts {
	private:
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
		std::string	get_firstn(void) const;
		std::string	get_lastn(void) const;
		std::string get_nick(void) const;
		std::string get_secr(void) const;
		std::string get_phone(void) const;

};
