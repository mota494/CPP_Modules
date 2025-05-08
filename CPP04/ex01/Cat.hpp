#pragma once

#include <iostream>
#include "ex00.hpp"

class Cat : public Animal
{
	protected:
		std::string type;
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &o_animal);
		Cat & operator = (const Cat &o_cat);
		void makeSound() const;
		std::string getType(void) const;
};
