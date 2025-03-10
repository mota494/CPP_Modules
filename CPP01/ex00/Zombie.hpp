/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:51:13 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/10 12:00:07 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define RED "\033[38;5;88m"
#define RESET "\033[0m"

class Zombie
{
	private:
		std::string name;
	public:
		Zombie	(std::string name);
		~Zombie (void);
		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
