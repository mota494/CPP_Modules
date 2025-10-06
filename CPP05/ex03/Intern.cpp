#include "Intern.hpp"
#include <exception>

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern &o_Intern){ (void)o_Intern; }
Intern &Intern::operator=(const Intern &o_Intern){ (void)o_Intern; return *this; }

const char*	Intern::NoFormException::what(void) const throw()
{
	return ("No form with that name");
}

AForm *Intern::makeForm(const std::string &formName, const std::string &Target)
{
	std::string formNames[3] = { "PresidentialPardonFrom", "RobotomyRequestForm", "ShruberryCreationForm" };
	int			i = 0;

	while (i <= 3)
	{
		if (formName == formNames[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << GREEN << "Intern creates PresidentialPardonFrom" << RESET << std::endl;
			return (new PresidentialPardonForm(Target));
		case 1:
			std::cout << GREEN << "Intern creates RobotomyRequestForm" << RESET << std::endl;
			return (new RobotomyRequestForm(Target));
		case 2:
			std::cout << GREEN << "Intern creates ShruberryCreationForm" << RESET << std::endl;
			return (new ShrubberyCreationForm(Target));
		default:
			std::cout << RED << "" << RESET << std::endl;
			throw NoFormException();
	}
}
