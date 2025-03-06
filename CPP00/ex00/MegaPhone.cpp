#include <iostream>

std::string capital(std::string str)
{
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (std::isalpha(str[i]))
			str[i] = std::toupper(str[i]);
	}
	return str;
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
			std::cout << capital(argv[i]);
		std::cout<<std::endl;
	}
	else
		std::cout << "* LOUND AND UNBEARABLE FEEDBACK NOISE *";
	return 0;
}
