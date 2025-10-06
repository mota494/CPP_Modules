#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;
class RobotomyRequestForm;
class PresidentialPardonForm;
class ShrubberyCreationForm;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &o_intern);
		Intern & operator = (const Intern &o_intern);

		AForm *makeForm(const std::string &formName, const std::string &Target);
		
		class NoFormException : public std::exception
		{
			const char *what() const throw();
		};
};

#endif
