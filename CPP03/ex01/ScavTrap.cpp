/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:53:00 by mloureir          #+#    #+#             */
/*   Updated: 2025/04/10 11:03:17 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string Name) : ClapTrap(Name)
{
	this->Name = Name;
	AttackDamage = 0;
	EnergyPoints = 10;
	HitPoints = 10;

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
