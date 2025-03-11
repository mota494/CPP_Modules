#pragma once

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string name);
		Weapon();
		~Weapon();
		std::string get_type(void) const;
		void setType(std::string input);
};
