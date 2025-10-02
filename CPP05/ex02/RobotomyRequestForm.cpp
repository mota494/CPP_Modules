#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 25, 5)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &o_RRF) : AForm(o_RRF.target, 25, 5)
{
	this->target = o_RRF.target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &o_PPF)
{
	if (this == &o_PPF)
		return *this;
	this->set_isSigned(o_PPF.getIsSigned());
	this->target = o_PPF.target;
	return *this;
}

void RobotomyRequestForm::Exeggutor() const
{
	std::cout << PRETTY << "Informs that " << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
