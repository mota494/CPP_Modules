/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:18:50 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/06 08:54:50 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
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

int	check_opt(std::string opt)
{
	if (opt.length() <= 0)
		return (1);
	for (unsigned long i = 0; i < opt.length(); i++)
	{
		if (std::isdigit(opt[i]) == 0)
			return (1);
	}
	return (0);
}

int	strtoi(std::string input)
{
	int	i;
	int	num;
	i = 0;
	num = 0;
	while ((input[i] >= 9 && input[i] <= 13) || (input[i] == 32))
		i++;
	while (isdigit(input[i]))
	{
		num = num * 10 + input[i] - 48;
		i++;
	}
	return (num);
}

