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
