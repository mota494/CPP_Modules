/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:18:13 by mloureir          #+#    #+#             */
/*   Updated: 2025/04/14 12:17:34 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap test("BURRO");
	ScavTrap test1("OUTRO BURRO");
	FragTrap test2("MAIS OUTRO BURRO");

	test.attack("OUTRO BURRO");
	test1.attack("BURRO");
	test1.guardGate();
	test2.highFivesGuys();
	return 0;
}
