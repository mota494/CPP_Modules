/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:55:53 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/14 15:21:39 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include <fstream>
#include <string>

int parser(int argc, char **argv)
{
	std::fstream file (argv[1]);

	if (argc != 4)
	{
		std::cout << "This program needs 3 arguments:\n";
		std::cout << "./sed <file> <string> <string to replace>";
		return (1);
	}
	if (file.good() == false)
	{
		std::cout << "Error reading the file";
		return (1);
	}
	file.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (parser(argc, argv) == 1)
		return (1);

	std::string rep_file = (std::string)argv[1] + ".replace", buffer;
	std::fstream file (argv[1]);
	std::fstream newfile (rep_file.c_str());

	file.is_open();
	newfile.is_open();
	while (getline(file, buffer))
	{
		std::cout << buffer << "\n";
	}
	return (0);
}
