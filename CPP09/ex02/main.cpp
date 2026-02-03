#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << RED << "Incorrect number of arguments" << RESET << std::endl;
		return (1);
	}
	else
	{
		PmergeMe::PmergeMe_list(argv[1]);
	}
	return (0);
}
