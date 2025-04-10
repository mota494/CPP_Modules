/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:18:13 by mloureir          #+#    #+#             */
/*   Updated: 2025/04/10 10:48:48 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap test("BURRO");

	test.attack("OUTRO BURRO");
	test.beRepaired(200);
	std::cout << test.get_HP() << std::endl;
	test.set_EP(0);
	test.attack("OUTRO BURRO");
	return 0;
}
