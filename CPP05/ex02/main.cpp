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
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main()
{
	std::cout << TEST << "JorgeDa42 will try to sign a form that it's not able to" << std::endl;

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
	std::cout << TEST << "JorgeDa43 will try to execute a form that it's not able to" << std::endl;

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
	std::cout << TEST << "JorgeDa44 will sign and execute RobotomyRequestForm" << std::endl;

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

	std::cout << "\n";
	std::cout << TEST << "JorgeDa45 will try to execute a form that's not signed" << RESET << std::endl;

	try
	{
		PresidentialPardonForm Form4("Pedro");
		Bureaucrat JorgeDa45("JorgeDa45", 2);
		JorgeDa45.executeForm(&Form4);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n";
	std::cout << TEST << "JorgeDa46 will sign and execute PresidentialPardonForm" << RESET << std::endl;

	try
	{
		PresidentialPardonForm Form5("Luis");
		Bureaucrat JorgeDa46("JorgeDa46", 2);
		JorgeDa46.signForm(&Form5);
		JorgeDa46.executeForm(&Form5);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n";
	std::cout << TEST << "JorgeDa47 will sign and execute ShrubberyCreationForm" << RESET << std::endl;

	try
	{
		ShrubberyCreationForm Form6("Form6");
		Bureaucrat JorgeDa47("JorgeDa47", 2);
		JorgeDa47.signForm(&Form6);
		JorgeDa47.executeForm(&Form6);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
