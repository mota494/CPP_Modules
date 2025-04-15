#include "Dog.hpp"

Dog::Dog(void) : type("Dog")
{
	std::cout << "A dog was adopted" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A dog was put to rest" << std::endl;
}

Dog::Dog(const Dog &o_dog) : Animal(o_dog)
{
	this->type = o_dog.type;
	std::cout << "Dog copy construcot call" << std::endl;
}

Dog& Dog::operator=(const Dog &o_dog)
{
	if (this != &o_dog)
		return *this;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "The dog says bark bark" << std::endl;
}

std::string Dog::getType(void) const { return this->type; }
