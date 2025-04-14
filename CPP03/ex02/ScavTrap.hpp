/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:59:22 by mloureir          #+#    #+#             */
/*   Updated: 2025/04/14 11:54:40 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		/*canonical form*/
		ScavTrap (std::string Name);
		~ScavTrap();
		ScavTrap(const ScavTrap &o_trap);
		ScavTrap & operator = (const ScavTrap &o_trap);
		/*i don't know*/
		void guardGate(void);
		void attack(const std::string &target);
};
