#pragma once

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool is_signed;
		const int	sign_grade;
		const int	sign_exec;
	public:
		AForm(std::string name, int sign_grade, int sign_exec);
		virtual ~AForm(void) = 0;
		AForm(const AForm &o_form);
		AForm &operator = (const AForm &o_form); 

		void	set_isSigned(bool isSign);
		void Execute(Bureaucrat *executer) const;
		virtual void Exeggutor() const = 0;
		std::string	getName(void) const;
		bool	getIsSigned(void) const;
		void	beSigned(void);
		int		getSGrade(void)	const;
		int		getEGrade(void) const;

		class FormIsNotSigned : public std::exception
		{
			const char *what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
};
