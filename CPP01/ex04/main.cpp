/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:55:53 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/18 14:37:10 by mloureir         ###   ########.pt       */
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

int	spaces(std::string str)
{
	int	i = 0;
	int	count = 0;
	
	while (str[i])
	{
		if ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
			count++;
		i++;
	}
	return (count);
}

std::string treatline(std::string buffer, char *str1, char *str2)
{
	int	fpos, lpos = 0;
	std::string	toret, helper;
	int str1_len, str2_len;

	helper = std::string(str1);
	str1_len = helper.length();
	while (buffer.find(str1, lpos) != std::string::npos)
	{
		fpos = buffer.find(str1, lpos);	
		toret += buffer.substr(lpos, fpos - lpos);
		toret += str2;
		lpos = fpos + str1_len;
	}
	toret += buffer.substr(lpos);
	return (toret);
}

int main(int argc, char **argv)
{
	if (parser(argc, argv) == 1)
		return (1);

	std::string rep_file = (std::string)argv[1] + ".replace", buffer;
	std::fstream file (argv[1]);
	std::ofstream newfile (rep_file.c_str());

	file.is_open();
	newfile.is_open();
	while (getline(file, buffer))
		newfile << treatline(buffer, argv[2], argv[3]) << "\n";
	file.close();
	newfile.close();
	return (0);
}
