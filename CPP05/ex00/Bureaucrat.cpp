#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw GradeToHigh();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat exploded" << std::endl;
}

const char *Bureaucrat::GradeToHigh::what(void) const throw()
{
	return ("Grade to ");
}
