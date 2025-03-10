/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:35:02 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/10 14:51:37 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *horde = new (std::nothrow) Zombie[n];
	int		i = 0;

	if (horde == NULL)
	{
		std::cout << RED << "Error! Alloc fail" << RESET << "\n";
		return (NULL);
	}
	else
	{
		while (i < n)
		{
			horde[i].set_name(name);
			i++;
		}
	}
	return (horde);
}
