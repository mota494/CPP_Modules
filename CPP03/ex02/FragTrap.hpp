#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		/*canonical form*/
		FragTrap (std::string Name);
		~FragTrap();
		FragTrap(const FragTrap &o_trap);
		FragTrap & operator = (const FragTrap &o_trap);
		/*yeah i still don't know*/
		void highFivesGuys(void);
};
