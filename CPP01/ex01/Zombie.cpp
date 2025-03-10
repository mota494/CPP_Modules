/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:50:49 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/10 15:03:23 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void){}
Zombie::Zombie(void){}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraaaaaaaaaiiiiiiiiiinnZZZZ\n";
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}
