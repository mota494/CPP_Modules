#include "Span.hpp"
#include <cstdlib>

int main()
{
	srand(time(NULL));
	
	std::cout << PRETTY << "--- 5 Random numbers --- \n" << RESET << std::endl;
	try 
	{
		Span test1(5);
		for (int i = 0; i < 5; i++) {
			int chance = rand() % 100 + 1;
			std::cout << "[" << chance << "]";
			test1.addNumber(chance);
		}
	std::cout << std::endl;
	std::cout << "Longest Span: " << test1.longestSpan() << std::endl;
	std::cout << "Shortest Span: " << test1.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << RED << "Error: " << e.what() << RESET << std::endl;
	}
	
	std::cout << PRETTY << "--- Adding more than the maximum ammount ---" << RESET << std::endl;
	try 
	{
		Span test2(1);
		for (int i = 0; i < 5; i++) {
			int chance = rand() % 100 + 1;
			std::cout << "[" << chance << "]";
			test2.addNumber(chance);
		}
	std::cout << std::endl;
	std::cout << test2.longestSpan() << std::endl;
	std::cout << test2.shortestSpan() << std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << RED << "Error: " << e.what() << RESET << std::endl;
	}

	std::cout << PRETTY << "--- Adding 5 numbers with repeats ---" << RESET << std::endl;
	try 
	{
		Span test3(5);
		test3.addNumber(3);
		test3.addNumber(1);
		test3.addNumber(4);
		test3.addNumber(5);
		test3.addNumber(5);
		std::cout << "Longest Span: " << test3.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << test3.shortestSpan() << std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << RED << "Error: " << e.what() << RESET << std::endl;
	}
	return (0);
}
