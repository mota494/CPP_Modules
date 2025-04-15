#include "ex00.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;
	
	std::cout << "<--------------------------------->" << std::endl;

	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_i = new WrongCat(); 
	
	std::cout << w_meta->getType() << std::endl;
	std::cout << w_i->getType() << std::endl;
	w_meta->makeSound();
	w_i->makeSound();

	delete w_meta;
	delete w_i;

	return 0;
}
