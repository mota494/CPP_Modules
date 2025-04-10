/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:18:13 by mloureir          #+#    #+#             */
/*   Updated: 2025/04/10 12:14:09 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap test("BURRO");
	ScavTrap test1("OUTRO BURRO");

	test.attack("OUTRO BURRO");
	test1.attack("BURRO");
	test1.guardGate();
	return 0;
}
