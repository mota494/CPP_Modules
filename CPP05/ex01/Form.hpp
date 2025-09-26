#pragma once

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool is_signed;
		const int	sign_grade;
		const int	sign_exec;
	public:
		Form(std::string name, int sign_grade, int sign_exec);
		~Form();
		Form(const Form &o_form);
		Form &operator = (const Form &o_form); 

		int beSigned(Bureaucrat *signer); 
		std::string	getName(void) const;

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
};
