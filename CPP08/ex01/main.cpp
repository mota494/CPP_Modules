#include "Span.hpp"
#include <cstdlib>

int main()
{
	srand(time(NULL));
	
	std::cout << PRETTY << "--- Test1 ---" << RESET << std::endl;
	try 
	{
		Span test1(5);
		for (int i = 0; i < 5; i++) {
			int chance = rand() % 100 + 1;
			std::cout << "[" << chance << "]";
			test1.addNumber(chance);
		}
	std::cout << std::endl;
	std::cout << test1.longestSpan() << std::endl;
	std::cout << test1.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << RED << "Error: " << e.what() << RESET << std::endl;
	}
	
	std::cout << PRETTY << "--- Test2 ---" << RESET << std::endl;
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
	return (0);
}
