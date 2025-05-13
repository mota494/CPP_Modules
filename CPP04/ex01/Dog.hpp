#pragma once

#include <iostream>
#include "ex00.hpp"

class Dog : public Animal
{
	protected:
		std::string type;
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &o_animal);
		Dog & operator = (const Dog &o_dog);
		void makeSound() const;
		std::string getType(void) const;
};
