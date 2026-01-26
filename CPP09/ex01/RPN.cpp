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

int RPN::isOp(const char &val)
{
	if(val == 42 || val == 45 || val == 47 || val == 43)
		return (0);
	return (1);
}

int RPN::isNum(const char &val)
{
	if(val >= 48 && val <= 57)
		return (0);
	return (1);
}

int RPN::doCalc(int num1, int num2, char op)
{
	int toret;

	if (op == '+')
		toret  = num1 + num2;
	else if (op == '-')
		toret = num1 - num2;
	else if (op == '/')
		toret = num1 / num2;
	else
		toret = num1 * num2;
	return (toret);
}

int	RPN::actualMath(std::string value)
{
	std::stack<char> nums;
	std::stack<char> ops;
	int	result = 0;

	value.erase(std::remove_if(value.begin(), value.end(), ::isspace), value.end());
	
	size_t i = 0, len = value.length();
	while (i < len)
	{
		if (isOp(value.at(i)) == 0)
			ops.push(value.at(i));
		else if (isNum(value.at(i)) == 0)
			nums.push(value.at(i));
		i++;
	}
	
	while (!ops.empty())
	{
		std::cout << "[" << ops.top() << "]";
		ops.pop();
	}
	std::cout << std::endl;
	while (!nums.empty())
	{
		std::cout << "[" << nums.top() << "]";
		nums.pop();
	}
	std::cout << std::endl;
	// THIS WON'T WORK STUPID ASS BOY
	return (result);
}

int RPN::checkFirstVals(std::string value)
{
	size_t	i = 0, len = value.length();
	if (len < 3)
		return (1);

	int num = 0, val_al = 0;
	while (val_al != 2)
	{
		while (value.at(i) == ' ')
			i++;
		if (isNum(value.at(i)) == 0)
		{
			num++;
			val_al++;
		}
		else if (isOp(value.at(i)) == 0)
			val_al++;
		else
			val_al++;
		i++;
	}
	if (num != 2)
		return (1);
	return (0);
}

int RPN::checkValues(std::string value)
{
	size_t	i = 0;
	int		num = 0;
	int		ops = 0;
	int		last = 0;

	size_t	len = value.length();
	if (checkFirstVals(value) != 0)
		return (1);
	while (i < len)
	{
		if (isNum(value.at(i)) == 0 && last == 0)
		{
			num++;
			last = 1;
		}
		else if (isOp(value.at(i)) == 0 && last == 0)
		{
			ops++;
			last = 2;
		}
		else if (value.at(i) == ' ')
			last = 0;
		else
			return (1);
		i++;
	}
	if (num - ops != 1)
		return (1);
	return (0);
}

void RPN::rpn(const std::string value)
{
	if (checkValues(value) != 0)
		std::cout << RED << "Error with input" << RESET << std::endl;
	else
		actualMath(value);
}
