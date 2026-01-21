#pragma once

#include <iostream>
#include <stack>
#include <cstdlib>

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
		static int	checkFirstVals(std::string value);
		static int	actualMath(std::string value);
		static int	vatNum(std::string value);
		static int	isOp(const char& val);
		static int  isNum(const char& val);
	public:
		static void rpn(const std::string values);
};
