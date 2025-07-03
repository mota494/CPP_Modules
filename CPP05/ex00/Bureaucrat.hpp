#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int	grade;
	public:
		std::string getName();
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const &Bureaucrat o_bureau);
		Bureaucrat& operator=(const &Bureaucrat o_bureau);
};
