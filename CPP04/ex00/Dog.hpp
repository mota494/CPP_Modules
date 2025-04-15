#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	protected:
		std::string type;
	public:
		Dog();
		~Dog();
		Dog(const Dog &o_animal);
		Dog & operator = (const Dog &o_dog);
		void makeSound() const;
		std::string getType(void) const;
};
