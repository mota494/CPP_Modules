/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:18:50 by mloureir          #+#    #+#             */
/*   Updated: 2025/02/25 09:55:50 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <cctype>

int	check_name(std::string name)
{
	if (name.length() > 0)
	{
		for (unsigned long i = 0; i < name.length(); i++)
		{
			if (std::isalpha(name[i]) == 0)
				return (1);
		}
	}
	else
		return (1);
	return (0);
}

int	check_number(std::string number)
{
	if (number.length() < 9)
		return (1);
	if (number.length() > 0 && number.length() == 9)
	{
		for (unsigned long i = 0; i < number.length(); i++)
		{
			if (std::isdigit(number[i]) == 0)
					return (1);
		}
	}
	return (0);
}
