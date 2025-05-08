#include "ex00.hpp"

int main()
{
	Animal *animals[10];
	int i = 0;

	while (i < 10/2)
	{
		animals[i] = new Dog();
		i++;
	}
	while (i < 10)
	{
		animals[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < 10)
	{
		animals[i]->makeSound();
		i++;
	}
	i = 0;
	while (i < 10)
	{
		delete animals[i];
		i++;
	}
	return (0);
}
