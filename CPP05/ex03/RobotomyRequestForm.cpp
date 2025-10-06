#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &o_RRF) : AForm(o_RRF.target, 72, 45)
{
	this->target = o_RRF.target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &o_RRF)
{
	if (this == &o_RRF)
		return *this;
	this->set_isSigned(o_RRF.getIsSigned());
	this->target = o_RRF.target;
	return *this;
}

void RobotomyRequestForm::Exeggutor() const
{
	srand (time(NULL));
	int	chance = rand() % 100 + 1;

	if (chance >= 50)
		std::cout << PRETTY << "bzuuuuuuu clank claink clokn " << this->target << " has been robotomized" << RESET << std::endl;
	else
		std::cout << RED << "kachow kaboom caput " << this->target << " has not been robotomized :<" << RESET << std::endl;
}
