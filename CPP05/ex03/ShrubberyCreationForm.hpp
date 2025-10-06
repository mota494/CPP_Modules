#ifndef SHRUBBERY_PARDON_FORM_HPP
#define SHRUBBERY_PARDON_FORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		explicit ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &o_SCF);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &o_PPF);

		void Exeggutor() const;
}; 

#endif
