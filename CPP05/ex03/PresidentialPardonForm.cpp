#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &o_PPF) : AForm(o_PPF.target, 25, 5)
{
	this->target = o_PPF.target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &o_PPF)
{
	if (this == &o_PPF)
		return *this;
	this->set_isSigned(o_PPF.getIsSigned());
	this->target = o_PPF.target;
	return *this;
}

void PresidentialPardonForm::Exeggutor() const
{
	std::cout << PRETTY << "Informs that " << this->target << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
}
