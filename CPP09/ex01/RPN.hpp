#pragma once

#include <iostream>
#include <stack>

#define GREEN "\033[38;5;83m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define PRETTY "\033[38;5;69m"
#define RESET "\033[0m"

class RPN
{
	private:
		RPN();
		~RPN();
		RPN(const RPN &o_RPN);
		RPN &operator=(const RPN &o_RPN);
		static int	checkValues(std::string value);
	public:
		static void rpn(const std::string values);
};
