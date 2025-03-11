#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->weapon = NULL;
	this->name = name;
}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->get_type() << "\n";	
	else
		std::cout << this->name << " attacks with their bare hands\n";
}
