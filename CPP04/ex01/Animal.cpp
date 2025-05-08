#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "An animal was adopted" << std::endl;
}

Animal::~Animal()
{
	std::cout << "An animal was put to rest" << std::endl;
}

Animal::Animal(const Animal &o_animal) : type(o_animal.type)
{
	std::cout << "Copy constructor call" << std::endl;
}

Animal& Animal::operator=(const Animal &o_animal)
{
	if (this != &o_animal)
		return *this;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "The animal goes ... goes ... ??? idk" << std::endl;
}

std::string Animal::getType(void) const { return this->type; }
