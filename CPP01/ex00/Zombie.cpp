/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:50:49 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/10 12:08:18 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << "The zombie " << this->name << RED << " has fallen" << RESET << "\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraaaaaaaaaiiiiiiiiiinnZZZZ\n";
}
