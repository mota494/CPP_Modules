#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap (std::string Name) : ClapTrap(Name)
{
	this->Name = Name;
	AttackDamage = 30;
	EnergyPoints = 100;
	HitPoints = 100;

	std::cout << PRETTY << "FragTrap created" << RESET << std::endl;
}

FragTrap::~FragTrap(){ std::cout << RED << "FragTrap destroyed" << RESET << std::endl; }

FragTrap::FragTrap (const FragTrap &o_trap) : ClapTrap(o_trap)
{
	this->Name = o_trap.Name;
	this->AttackDamage = o_trap.AttackDamage;
	this->EnergyPoints = o_trap.EnergyPoints;
	this->HitPoints = o_trap.HitPoints;
}

FragTrap &FragTrap::operator = (const FragTrap &o_trap)
{
	if (this != &o_trap)
	{
		this->Name = o_trap.Name;
		this->AttackDamage = o_trap.AttackDamage;
		this->EnergyPoints = o_trap.EnergyPoints;
		this->HitPoints = o_trap.HitPoints;
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	if (this->EnergyPoints <= 0)
		std::cout << "I'd love to high five you but i'm " << RED << "out of energy" << RESET << std::endl;
	else
		std::cout << "Hey pretty person, want to give me an high five?" << std::endl;
}
