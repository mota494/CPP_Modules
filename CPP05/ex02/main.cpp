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
#include "Form.hpp"
#include <exception>

int main()
{
	std::cout << RED << "Bureaucrat Afonso will try to sign the same Form twice" << RESET << std::endl;
	try
	{
		Form Form1("Everyone gets puppies", 4, 150);
		Bureaucrat Afonso("Afonso", 2);
		Form1.beSigned(&Afonso);
		Afonso.signForm(&Form1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << YELLOW << "Bureaucrat Gigamesh will try to sign a Form with a grade above him" << RESET << std::endl;
	try
	{
		Form Form2("Blow up the stegossaurus", 1, 1);
		Bureaucrat Gigamesh("Gigamesh", 150);
		Gigamesh.signForm(&Form2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

