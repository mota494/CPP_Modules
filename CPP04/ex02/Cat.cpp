#include "ex00.hpp"

Cat::Cat(void) : type("Cat")
{
	std::cout << "A cat was adopted" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "A cat was put to rest" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &o_cat) : Animal(o_cat)
{
	this->type = o_cat.type;
	std::cout << "Cat copy construcot call" << std::endl;
}


Cat& Cat::operator=(const Cat &o_cat)
{
	if (this != &o_cat)
		return *this;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "The cat does the meow meow" << std::endl;
}

std::string Cat::getType(void) const { return this->type; }
