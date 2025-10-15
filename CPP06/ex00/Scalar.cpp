#include "Scalar.hpp"

void ScalarConverter::ConvertFromChar(std::string &input)
{
	std::cout << "Char: " << input << "\nInt: " << static_cast<int>(input[0]) << std::endl;
	std::cout << "Double: " << static_cast<double>(input[0]) << "\nFloat: " << static_cast<float>(input[0]) << "f" << std::endl; 
}

bool ScalarConverter::IsItChar(std::string &input)
{
	if (input.size() > 1)
		return (false);
	else if (std::isprint(input[0]) && !std::isdigit(input[0]))
		return (true);
	return (false);
}

bool CanNumberToChar(std::string &input)
{
	if (input[0] == '-')
		return (false);
	else if (std::atol(input.c_str()) > 127 || std::atol(input.c_str()) < 32)
		return (false);
	return(true);
}

void ScalarConverter::ConvertFromInt(std::string &input)
{
	if (CanNumberToChar(input))
		std::cout << "Char: " << static_cast<char>(std::atoi(input.c_str()));
	else
		std::cout << "Char: Not printable";
	long double number = std::strtold(input.c_str(), NULL);
	if (number > std::numeric_limits<int>::max() || number < -std::numeric_limits<int>::max())
		std::cout << "\nInt: Not an int";
	else
		std::cout << "\nInt: " << std::atoi(input.c_str());
	if (number > std::numeric_limits<double>::max() || number < -std::numeric_limits<double>::max())
		std::cout << "\nDouble: Not a double";
	else
		std::cout << "\nDouble: " << std::strtod(input.c_str(), NULL);
	if (number > std::numeric_limits<float>::max() || number < -std::numeric_limits<float>::max())
		std::cout << "\nFloat: Not a float" << std::endl;
	else
		std::cout << "\nFloat: " << std::strtof(input.c_str(), NULL) << "f" << std::endl;
}

bool IsASignal(char c)
{
	if (c == '-' || c == '+')
		return (true);
	return (false);
}

bool ScalarConverter::IsItInt(std::string &input)
{
	if (!std::isdigit(input[0]) && !IsASignal(input[0]))
		return (false);
	int	i = 1;
	while (input[i])
	{
	if (!std::isdigit(input[i]))
			return (false);
		i++;
	}
	return (true);
}

bool ScalarConverter::IsItDouble(std::string &input)
{
	if (!std::isdigit(input[0]) && !IsASignal(input[0]))
		return (false);
	int	i = 1;
	int dot = 0;
	while (input[i])
	{
		if (input[i] == '.' && dot == 1)
			return (false);
		else if (input[i] == '.')
			dot = 1;
		else if (!std::isdigit(input[i]))
			return (false);
		i++;
	}
	return (true);
}

bool ScalarConverter::IsItFloat(std::string &input)
{
	if (!std::isdigit(input[0]) && !IsASignal(input[0]))
		return (false);
	int	i = 1;
	int dot = 0, f = 0;
	while (input[i])
	{
		if (input[i] == '.' && dot == 1)
			return (false);
		else if (input[i] == '.')
			dot = 1;
		else if (input[i] == 'f')
			f++;
		else if (!std::isdigit(input[i]))
			return (false);
		i++;
	}
	if (f > 1 || input[i - 1] != 'f')
		return (false);
	return (true);
}

bool ScalarConverter::IsItInfNan(std::string &input, int *type)
{
	if (input == "-inff" || input == "+inff")
	{
		*type = 1;
		return (true);
	}
	if (input == "-inf" || input == "+inf")
	{
		*type = 0;
		return (true);
	}
	if (input == "nan")
	{
		*type = 0;
		return (true);
	}
	if (input == "nanf")
	{
		*type = 1;
		return (true);
	}
	return (false);
}

void ScalarConverter::WriteNanInf(std::string &input, int type)
{
	if (type == 0)
		std::cout << "Char: Not Char\nInt: Not an int\nDouble: " << input << "\nFloat: " << input << "f" << std::endl;
	else if (type == 1)
	{
		input.erase(input.size() - 1);
		std::cout << "Char: Not Char\nInt: Not an int\nDouble: " << input << "\nFloat: " << input << "f" << std::endl;
	}
}

void ScalarConverter::convert(std::string &input)
{
	int	type = 0;

	if (IsItChar(input))
		ConvertFromChar(input);
	else if (IsItInt(input))
		ConvertFromInt(input);
	else if (IsItDouble(input))
		ConvertFromInt(input);
	else if (IsItFloat(input))
		ConvertFromInt(input);
	else if (IsItInfNan(input, &type))
		WriteNanInf(input, type);
	else
		std::cout << RED << "Unknown type" << RESET << std::endl;
}

ScalarConverter::ScalarConverter(){};
ScalarConverter::~ScalarConverter(){};
ScalarConverter::ScalarConverter(const ScalarConverter &o_SC){ (void)o_SC; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &o_SC){ (void)o_SC; return *this; }
