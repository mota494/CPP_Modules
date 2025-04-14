/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:01:38 by mloureir          #+#    #+#             */
/*   Updated: 2025/04/10 10:40:38 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string Name)
{
	this->Name = Name;
	AttackDamage = 0;
	EnergyPoints = 10;
	HitPoints = 10;

	std::cout << PRETTY << "ClapTrap created" << RESET << std::endl;
}

ClapTrap::~ClapTrap(){ std::cout << RED << "ClapTrap destroyed" << RESET << std::endl; }

ClapTrap::ClapTrap (const ClapTrap &o_trap)
{
	this->Name = o_trap.Name;
	this->AttackDamage = o_trap.AttackDamage;
	this->EnergyPoints = o_trap.EnergyPoints;
	this->HitPoints = o_trap.HitPoints;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &o_trap)
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

void ClapTrap::attack(const std::string &target)
{
	if (get_EP() >= 1 && get_HP() >= 1)
	{
		std::cout << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		set_EP(get_EP() - 1);
	}
	else
		std::cout << this->Name << " has no energy points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints <= 0)
		std::cout << this->Name << " took " << amount << " of damage but he was already dead" << std::endl;
	else
	{
		std::cout << this->Name << " took " << amount << " of damage" << std::endl;
		set_HP(get_HP() - amount);
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints >= 1 && HitPoints >= 1)
	{
		std::cout << this->Name << " repairs itself healing " << amount << " hit points" << std::endl;
		set_HP(HitPoints + amount);
	}
	else
		std::cout << this->Name << " tried to repair itself but failed" << std::endl;
}

int	ClapTrap::get_HP(void) const { return HitPoints; }
int	ClapTrap::get_EP(void) const { return EnergyPoints; }
int	ClapTrap::get_AD(void) const { return AttackDamage; }
void ClapTrap::set_EP(int input) { EnergyPoints = input; }
void ClapTrap::set_HP(int input) { HitPoints = input; }
