/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:14:57 by mloureir          #+#    #+#             */
/*   Updated: 2025/09/24 14:42:47 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &o_bureau) : name(o_bureau.name), grade(o_bureau.grade)
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

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Bureaucrat grade to high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Bureaucrat grade to low");
}

void	Bureaucrat::incGrade(void)
{
	if (this->grade - 1 <= 0)
		throw GradeTooHighException();
	this->grade -= 1;
}

void	Bureaucrat::decGrade(void)
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	this->grade += 1;
}
