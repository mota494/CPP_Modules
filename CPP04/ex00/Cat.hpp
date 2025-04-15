#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	protected:
		std::string type;
	public:
		Cat();
		~Cat();
		Cat(const Cat &o_animal);
		Cat & operator = (const Cat &o_cat);
		void makeSound() const;
		std::string getType(void) const;
};
