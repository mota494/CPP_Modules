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
	if(val == '*' || val == '-' || val == '/' || val == '+')
		return (0);
	return (1);
}

int RPN::isNum(const char &val)
{
	if(val >= '0' && val <= '9')
		return (0);
	return (1);
}

int RPN::actualMath(std::string value)
{
	//conversion
	std::stack<int> operands;
	std::stack<char> operators;

	size_t i = 0, len = value.length();

	while (i < len)
	{
		/*while (value.at(i) == ' ')
			i++;*/
		if (isNum(value.at(i)) == 0)
			operands.push(value.at(i) - '0');
		else if (isOp(value.at(i)) == 0)
			operators.push(value.at(i));
		i++;
	}

	while(!operators.empty())
	{
		int d = operators.top();
		std::cout << d << std::endl;
		operators.pop();
	}
	//calcs
	int result = 0;
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
	int		last;

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
