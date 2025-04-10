/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:53:00 by mloureir          #+#    #+#             */
/*   Updated: 2025/04/10 12:16:06 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string Name) : ClapTrap(Name)
{
	this->Name = Name;
	AttackDamage = 20;
	EnergyPoints = 50;
	HitPoints = 100;

	std::cout << PRETTY << "ScavTrap created" << RESET << std::endl;
}

ScavTrap::~ScavTrap(){ std::cout << RED << "ScavTrap destroyed" << RESET << std::endl; }

ScavTrap::ScavTrap (const ScavTrap &o_trap) : ClapTrap(o_trap)
{
	this->Name = o_trap.Name;
	this->AttackDamage = o_trap.AttackDamage;
	this->EnergyPoints = o_trap.EnergyPoints;
	this->HitPoints = o_trap.HitPoints;
}

void ScavTrap::attack(const std::string &target)
{
	if (get_EP() >= 1 && get_HP() >= 1)
	{
		std::cout << this->Name << " the ScavTrap attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		set_EP(get_EP() - 1);
	}
	else
		std::cout << this->Name << " has no energy points left" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->Name << " is now in defensive mode" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &o_trap)
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
