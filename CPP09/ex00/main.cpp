#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange test1;
		if (test1.readBtc(argv[1]) != 0)
			return (1);
	}
	else
	{
		std::cout << RED << "No file to read" << RESET << std::endl;
		return (1);
	}
	return (0);
}
