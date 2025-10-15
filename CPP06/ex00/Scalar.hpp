#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

#define GREEN "\033[38;5;83m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define TEST "\033[38;5;123m"
#define PRETTY "\033[38;5;69m"
#define RESET "\033[0m"

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &o_SC);
		ScalarConverter& operator = (const ScalarConverter &o_SC);
		static bool	IsItChar(std::string &input);
		static void ConvertFromChar(std::string &input);
		static bool	IsItInt(std::string &input);
		static void ConvertFromInt(std::string &input);
		static bool	IsItDouble(std::string &input);
		static bool IsItFloat(std::string &input);
		static bool IsItInfNan(std::string &input, int *type);
		static void WriteNanInf(std::string &input, int type);
	public:
		static void convert(std::string &input);
};

#endif
