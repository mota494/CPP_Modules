#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &o_SCF) : AForm(o_SCF.target, 145, 137)
{
	this->target = o_SCF.target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &o_SCF)
{
	if (this == &o_SCF)
		return *this;
	this->set_isSigned(o_SCF.getIsSigned());
	this->target = o_SCF.target;
	return *this;
}

void ShrubberyCreationForm::Exeggutor() const
{
	std::ofstream outputFile((this->target + "_shrubbery").c_str());

	outputFile << ":::::::::::==:::::::::::::\n";
	outputFile << "::::::::====++=+++::::::::\n";
	outputFile << "::::::=+=*+*********::::::\n";
	outputFile << "::::+*+*+*++*#===+*###::::\n";
	outputFile << ":::**===###+=====+++++##::\n";
	outputFile << "::=========+++**=======%::\n";
	outputFile << ":=======*=***%#+========*:\n";
	outputFile << ":::*==###*==++*==%***%**::\n";
	outputFile << ":::::::*#+**+++*****::::::\n";
	outputFile << "::::::::::::*+::::::::::::\n";
	outputFile << ":::::::::::+++*:::::::::::\n";
	outputFile << ":::::::::::+++*:::::::::::\n";
	outputFile << "::::::::++*++*+**:::::::::\n";
	outputFile << "::::::::::::::::::::::::::\n";
}
