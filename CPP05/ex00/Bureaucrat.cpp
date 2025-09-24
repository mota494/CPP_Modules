#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeToHigh();
	if (grade > 150)
		throw GradeToLow();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName(void) const { return name; }
int			Bureaucrat::getGrade(void) const { return grade; }

std::ostream& operator << (std::ostream &os, const Bureaucrat &o_bureu)
{
	os << PRETTY << o_bureu.getName() << ", Bureaucrat grade " << o_bureu.getGrade() << RESET << std::endl;
	return (os);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &o_bureu)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	if (this == &o_bureu)
		return (*this);
	this->grade = o_bureu.grade;
	return (*this);
}

const char *Bureaucrat::GradeToHigh::what(void) const throw()
{
	return ("Grade to high");
}

const char *Bureaucrat::GradeToLow::what(void) const throw()
{
	return ("Grade to low");
}

void	Bureaucrat::incGrade(void)
{
	if (this->grade - 1 <= 0)
		throw GradeToHigh();
	this->grade -= 1;
}

void	Bureaucrat::decGrade(void)
{
	if (this->grade + 1 > 150)
		throw GradeToLow();
	this->grade += 1;
}
