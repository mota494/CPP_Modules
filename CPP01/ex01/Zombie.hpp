/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:51:13 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/10 14:50:13 by mloureir         ###   ########.pt       */
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
		Zombie	();
		~Zombie (void);
		void	announce(void);
		void	set_name(std::string);
};

Zombie	*zombieHorde(int n, std::string name);
