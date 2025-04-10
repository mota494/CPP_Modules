/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:38:41 by mloureir          #+#    #+#             */
/*   Updated: 2025/04/10 10:29:53 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define GREEN "\033[38;5;83m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define PRETTY "\033[38;5;69m"
#define RESET "\033[0m"

class ClapTrap
{
	private:
		std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;
	public:
		/* canonical form*/
		ClapTrap (std::string Name);
		~ClapTrap();
		ClapTrap(const ClapTrap &o_trap);
		ClapTrap & operator = (const ClapTrap &o_trap);
		/* project */
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		/*set & get*/
		int	get_HP(void) const;
		int get_EP(void) const;
		int get_AD(void) const;
		void set_EP(int input);
		void set_HP(int input);
};

