/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:10:25 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/10 12:17:30 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *toret = new(std::nothrow) Zombie(name);
	if (toret == NULL)
	{
		std::cout << RED << "ERROR! Bad alloc" << RESET;
		return NULL;
	}
	else 
	{
		return toret;
	}
}
