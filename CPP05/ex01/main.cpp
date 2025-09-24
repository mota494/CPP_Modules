/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:27:31 by mloureir          #+#    #+#             */
/*   Updated: 2025/09/24 13:48:17 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << RED << "Bureaucrat Afonso will DEC to low" << RESET << std::endl;

	try
	{
		Bureaucrat Afonso("Afonso",150);
		std::cout << Afonso;
		Afonso.decGrade();
		std::cout << Afonso;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << YELLOW << "Bureaucrat Burro will INC to high" << RESET << std::endl;

	try
	{
		Bureaucrat Burro("Burro",1);
		std::cout << Burro;
		Burro.incGrade();
		std::cout << Burro;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GREEN << "Bureaucrat EU will INC succesefuly" << RESET << std::endl;
	
	try
	{
		Bureaucrat Burro("Burro",2);
		std::cout << Burro;
		Burro.incGrade();
		std::cout << Burro;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << RED << "Bureaucrat Gigamesh will be created with grade to low" << RESET << std::endl;

	try
	{
		Bureaucrat Gigamesh("Gigamesh",168);
		std::cout << Gigamesh;
		Gigamesh.incGrade();
		std::cout << Gigamesh;
	}	
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

