#pragma once

#include <exception>
#include <iostream>

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

		class GradeToHigh : public std::exception
		{
			const char *what() const throw();
		};
};

