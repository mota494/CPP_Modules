#include "Scalar.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << RED << "Please use at least one argument" << RESET << std::endl;
		return (1);
	}
	else
	{
		int	i = 1;

		std::string input;
		while (i < argc)
		{
			input = argv[i];
			std::cout << PRETTY << "=== arg: " << i << "	input: " << input << "===" << RESET << std::endl;
			ScalarConverter::convert(input);
			std::cout << "\n";
			i++;
		}
	}
}
