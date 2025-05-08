#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &o_animal);
		Animal & operator = (const Animal &o_animal);
		virtual void makeSound() const;
		std::string getType(void) const;
};
