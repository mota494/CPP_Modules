/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:01:34 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/10 12:24:43 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	int	i = 1;
	Zombie *zombie;

	if (argc < 2)
	{
		std::cout << RED << "ERROR!\n" << RESET << "This program needs names to give the zombies";
		return (1);
	}
	else 
	{
		randomChump(argv[i]);
		i++;
		while (i < argc)
		{
			zombie = newZombie(argv[i]);
			zombie->announce();
			delete zombie;
			i++;
		}
	}
}
