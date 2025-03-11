#include "Weapon.hpp"

Weapon::Weapon(std::string input)
{
	type = input;
}

std::string	Weapon::get_type(void) const
{
	return this->type;
}

void Weapon::setType(std::string input)
{
	this->type = input;
}

Weapon::~Weapon(){}

Weapon::Weapon(){}
