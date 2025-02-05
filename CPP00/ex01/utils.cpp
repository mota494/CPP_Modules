/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:18:50 by mloureir          #+#    #+#             */
/*   Updated: 2025/02/05 10:31:38 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

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
	return (0);
}
