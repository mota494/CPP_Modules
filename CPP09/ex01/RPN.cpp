#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN &o_RPN)
{
	(void)o_RPN;
}

RPN &RPN::operator=(const RPN &o_RPN)
{
	return (*this);
	(void) o_RPN;
}

int RPN::checkValues(std::string value)
{
	size_t	i = 0;

	while (i < value.length())
	{
		std::cout << "[" << value.at(i) << "]" << std::endl;
		i++;
	}
	return (0);
}

void RPN::rpn(const std::string value)
{
	if (checkValues(value) != 0)
		std::cout << RED << "Error with input" << RESET << std::endl;
}	

