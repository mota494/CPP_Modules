#pragma once

#include <string>
#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <iterator>
#include <ctime>
#include <iomanip>

#define GREEN "\033[38;5;83m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define PRETTY "\033[38;5;69m"
#define RESET "\033[0m"

class PmergeMe
{
	private:
		PmergeMe(void);
		~PmergeMe(void);
		PmergeMe(const PmergeMe &o_Pmerge);
		PmergeMe &operator=(const PmergeMe &o_Pmerge);

		static int verify_args(std::string args);
		static unsigned int strToUInt(std::string);
		static int Jacobsthal(int k); 

		static int create_list(std::list<unsigned int> &list, std::string args);
		static void	print_list(std::list<unsigned int> &list);
		static void sort_list(std::list <unsigned int> &list);
		static void	merge_list(std::list<unsigned int> left, std::list<unsigned int> right, std::list<unsigned int> &list);
	public:
		static int PmergeMe_list(char *argv);
		static int PmergeMe_vector(char *argv);
};
