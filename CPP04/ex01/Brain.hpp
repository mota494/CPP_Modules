#pragma once

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &o_brain);
		Brain & operator = (const Brain &o_brain);
};
