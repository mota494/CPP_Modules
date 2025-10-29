#include "iter.hpp"

void toUpper(char &c) { c = std::toupper(static_cast<unsigned char>(c)); }

void toLower(char &c) { c = std::tolower(static_cast<unsigned char>(c)); }

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	std::string conversion = argv[1];
	iter(argv[1], conversion.size(), toUpper);
	std::cout << argv[1] << std::endl;
	iter(argv[1], conversion.size(), toLower);
	std::cout << argv[1] << std::endl;
	return (0);
}

