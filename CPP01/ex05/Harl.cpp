/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:07:04 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/18 14:37:51 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cctype>

void Harl::complain(std::string level)
{
	size_t	i = 0;
	std::string inputs[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*funcs[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	while (i < level.length())
	{
		level[i] = toupper(level[i]);
		i++;
	}

	i = 0;
	while (i <= 3)
	{
		if (inputs[i] == level)
			(this->*funcs[i])();
		i++;
	}
}

void Harl::debug(void)
{
	std::cout << DEBUG << "[DEBUG]" << RESET << "\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << INFO << "[INFO]" << RESET << "\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << WARNING << "[WARNING]" << RESET << "\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error(void)
{
	std::cout << ERROR << "[ERROR]" << RESET << "\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
