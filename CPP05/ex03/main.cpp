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

#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
	std::cout << TEST << "Intern cralos7 will try to create a form that doesn't exist" << RESET << std::endl;

	try
	{
		Intern cralos7;
		AForm *form1;

		form1 = cralos7.makeForm("dasdas", "Cralos7");
	}
	catch (std::exception &e)
	{ 
		std::cout << e.what() << std::endl;
	}

	std::cout << TEST << "\nIntern cralos8 will create a form" << RESET << std::endl;
	try
	{
		Intern Cralos8;
		AForm *form2;

		form2 = Cralos8.makeForm("ShruberryCreationForm", "Cralos8");
	}
	catch (std::exception &e)
	{ 
		std::cout << e.what() << std::endl;
	}
}
