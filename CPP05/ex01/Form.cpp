/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:13:23 by mloureir          #+#    #+#             */
/*   Updated: 2025/09/26 15:15:26 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int sign_grade, const int sign_exec) : 
	name(name), is_signed(false), sign_grade(sign_grade), sign_exec(sign_exec)
{
	if (sign_grade < 1 || sign_exec < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || sign_exec > 150)
		throw GradeTooLowException();
}

Form::~Form(void)
{
}

Form::Form(const Form &o_form) :
	name(o_form.name), is_signed(o_form.is_signed), sign_grade(o_form.sign_grade), sign_exec(o_form.sign_exec)
{
}

Form &Form::operator = (const Form &o_form)
{
	if (this == &o_form)
		return (*this);
	this->is_signed = o_form.is_signed;
	return (*this);
}

int	Form::beSigned(Bureaucrat *signer)
{
	if (signer->getGrade() > this->sign_grade)
	{
		throw GradeTooHighException();
		return 1;
	}
	else if (this->is_signed == true)
		return 2;
	else
	{
		this->is_signed = true;
		return 0;
	}
}

std::string Form::getName(void) const { return this->name; }

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade to high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade to low");
}
