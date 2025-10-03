#pragma once

#include <exception>
#include <iostream>

#define GREEN "\033[38;5;83m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define PRETTY "\033[38;5;69m"
#define RESET "\033[0m"

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int	grade;
	public:
		std::string getName() const;
		int			getGrade() const;
		
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &o_bureau);
		Bureaucrat& operator = (const Bureaucrat &o_bureau);
	
		void	signForm(AForm *toSign);
		void	incGrade();
		void	decGrade();
		void	executeForm(AForm *form);

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os ,const Bureaucrat &o_bureau);
