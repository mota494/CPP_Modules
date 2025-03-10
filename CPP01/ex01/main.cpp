/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:01:34 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/10 15:05:45 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cctype>
#include <cstring>

int	isalldigit(char *argv)
{
	size_t	i = 0;

	while (i < strlen(argv))
	{
		if (!isdigit(argv[i]))
			return (1);
		i++;
	}
	return (0);
}

int	chartoi(char *input)
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

int main(int argc, char **argv)
{
	int i = 0;
	Zombie *horde;

	if (argc < 2)
	{
		std::cout << RED << "ERROR!\n" << RESET << "This program needs a number of zombies";
		return (1);
	}
	else 
	{
		if (isalldigit(argv[1]) == 0)
		{
			int	N = chartoi(argv[1]);
			horde = zombieHorde(N, "Peashooter");
			while (i < N)
			{
				horde[i].announce();
				i++;
			}
			delete [] horde;
		}
	}
}
