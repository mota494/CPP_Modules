#include "AForm.hpp"

AForm::AForm(const std::string name, const int sign_grade, const int sign_exec) : 
	name(name), is_signed(false), sign_grade(sign_grade), sign_exec(sign_exec)
{
	if (sign_grade < 1 || sign_exec < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || sign_exec > 150)
		throw GradeTooLowException();
}

AForm::~AForm(void)
{
}

AForm::AForm(const AForm &o_form) :
	name(o_form.name), is_signed(o_form.is_signed), sign_grade(o_form.sign_grade), sign_exec(o_form.sign_exec)
{
}

AForm &AForm::operator = (const AForm &o_form)
{
	if (this == &o_form)
		return (*this);
	this->is_signed = o_form.is_signed;
	return (*this);
}

void	AForm::set_isSigned(bool isSign) { this->is_signed = isSign; }
void	AForm::beSigned(void) { this->is_signed = true; }
std::string AForm::getName(void) const { return this->name; }
bool	AForm::getIsSigned(void) const { return this->is_signed; }
int		AForm::getSGrade(void) const { return this->sign_grade; }
int		AForm::getEGrade(void) const { return this->sign_exec; }

void	AForm::Execute(Bureaucrat *executer) const
{
	if (this->is_signed == false)
		throw FormIsNotSigned();
	else if (executer.getGrade() > this->getEGrade())
		throw GradeTooHighException();
	else
		this->Exeggutor();
}

const char *AForm::FormIsNotSigned::what() const throw()
{
	return ("Form is not signed");
}

const char *AForm::GradeTooHighException::what() const throw()
{
return ("Form grade to high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade to low");
}
