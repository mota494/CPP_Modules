#include "PmergeMe.hpp"
#include <algorithm>

int PmergeMe::Jacobsthal(int k) {
    return round((pow(2, k + 1) + pow(-1, k)) / 3);
}

unsigned int PmergeMe::strToUInt(std::string str) {
  std::istringstream iss(str);
  double value;

  if (!(iss >> value)) {
    return -1;
  }
  return value;
};

int PmergeMe::verify_args(std::string args)
{
	size_t	i = 0;

	while (i < args.size())
	{
		if (::isdigit(args.at(i)) == 0 && ::isspace(args.at(i)) == 0)
			return (1);
		i++;
	}
	return (0);
}

//LIST 
//This should be done with a single set of functions and using templates but i was already
//to far down when i realized this so :3 silly

void PmergeMe::print_list(std::list<unsigned int> &list)
{
	std::list<unsigned int>::iterator list_it = list.begin();

	std::cout << "List size: " << list.size() << std::endl;
	while(list_it != list.end())
	{
		std::cout << "[" << *list_it << "]";
		list_it++;
	}
	std::cout << std::endl;
}

int	PmergeMe::create_list(std::list<unsigned int> &list, std::string args)
{
	size_t	i = 0;
	std::string current_num;

	while (i < args.size())
	{
		while (i < args.size() && ::isspace(args.at(i)) > 0)
			i++;
		while (i < args.size() && ::isdigit(args.at(i)) > 0)
		{
			current_num.insert(current_num.end(), args.at(i));
			i++;
		}
		if (current_num.size() > 0)
		{
			if (std::find(list.begin(), list.end(), strToUInt(current_num)) != list.end())
				return (1);
			else
				list.push_back(strToUInt(current_num));
			current_num.clear();
		}
	}
	if (list.size() <= 0)
		return (1);
	return (0);
}

void PmergeMe::merge_list(std::list<unsigned int> left, std::list<unsigned int> right, std::list<unsigned int> &list)
{
	size_t l = 0, r = 0;
	std::list<unsigned int>::iterator le_it = left.begin(), ri_it = right.begin();

	while (l < left.size() && r < right.size())
	{
		if (*le_it < *ri_it)
		{
			list.push_back(*le_it);
			l++;
			le_it++;
		}
		else
		{
			list.push_back(*ri_it);
			r++;
			ri_it++;
		}
	}
	while (l < left.size())
	{
		list.push_back(*le_it);
		l++;
		le_it++;
	}
	while (r < right.size())
	{
		list.push_back(*ri_it);
		r++;
		ri_it++;
	}
}

void PmergeMe::sort_list(std::list<unsigned int> &list)
{
	size_t len = list.size();
	if (len <= 1)
		return;

	size_t mid = len / 2;
	std::list<unsigned int>::iterator it = list.begin();
	std::list<unsigned int> left;
	std::list<unsigned int> right;

	for (size_t i = 0; i < len; i++)
	{
		if (i < mid)
			left.push_back(*it);
		else
			right.push_back(*it);
		it++;
	}
	sort_list(left);
	sort_list(right);
	std::list<unsigned int> new_list;
	merge_list(left, right, new_list);
	list = new_list;
}

int PmergeMe::PmergeMe_list(char *argv)
{
	std::string args = argv;
	std::list<unsigned int> list;

	if (verify_args(args) != 0 || create_list(list, args) != 0)
	{
		std::cerr << PRETTY << "std::[list] " << RED  "Input is incorrect" << RESET << std::endl;
		return (1);
	}
	sort_list(list);
	print_list(list);
	return (0);
}

PmergeMe::PmergeMe(void){};

PmergeMe::~PmergeMe(void){};

PmergeMe::PmergeMe(const PmergeMe &o_Pmerge){ (void)o_Pmerge; };
