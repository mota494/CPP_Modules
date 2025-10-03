/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:27:31 by mloureir          #+#    #+#             */
/*   Updated: 2025/09/26 15:27:56 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>

int main()
{
	std::cout << PRETTY << "JorgeDa42 will try to sign a form that it's not able to" << std::endl;

	try
	{
		RobotomyRequestForm Form1("Afonso");
		Bureaucrat JorgeDa42("JorgeDa42",90);
		JorgeDa42.signForm(&Form1);
		JorgeDa42.executeForm(&Form1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n";
	std::cout << PRETTY << "JorgeDa43 will try to execute a form that it's not able to" << std::endl;

	try
	{
		RobotomyRequestForm Form2("Lena");
		Bureaucrat JorgeDa43("JorgeDa43", 71);
		JorgeDa43.signForm(&Form2);
		JorgeDa43.executeForm(&Form2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n";
	std::cout << PRETTY << "JorgeDa44 will sign and executere RobotomyRequestForm" << std::endl;

	try
	{
		RobotomyRequestForm Form3("Joao");
		Bureaucrat JorgeDa44("JorgeDa44", 2);
		JorgeDa44.signForm(&Form3);
		JorgeDa44.executeForm(&Form3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
