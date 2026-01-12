#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) : CoinEx(){};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &o_BitEx) : CoinEx(o_BitEx.CoinEx){};

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &o_BitEx)
{
	this->CoinEx = o_BitEx.CoinEx;
	return *this;
};

BitcoinExchange::~BitcoinExchange(void){};

double BitcoinExchange::strd(std::string input)
{
	std::stringstream ss(input);
	double toret;

	ss >> toret;
	return (toret);
}

std::string BitcoinExchange::dateToInt(std::string input)
{
	input.erase(std::remove(input.begin(), input.end(), '-'), input.end());
	return (input);
}

//substr(0,4) year
//substr(5,2) month
//substr(8,2) day

bool BitcoinExchange::isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return (true);
	return (false);
}

int	BitcoinExchange::checkDayMonth(int month, int day, int year)
{
	if (month >= 1 && month <= 12)
	{
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (day > 30 || day < 0)
				return (1);
		}
		else
		{
			if (month == 2)
			{
				if (day == 29 && !isLeapYear(year))
					return (1);
				else if (day == 29 && isLeapYear(year))
					return (0);
				else if (day > 28)
					return (0);
			}
			else
			{
				if (day > 31 || day < 0)
					return (1);
			}
		}
	}
	else
		return (1);
	return (0);
}

int	BitcoinExchange::checkDate(std::string input)
{
	int	day = strd(input.substr(8,2));
	int	month = strd(input.substr(5,2));
	int year = strd(input.substr(0,4));

	if (input.size() != 10)
	{
		std::cout << input << "<--- Date must be as follows yy-mm-dd" << std::endl;
		return (1);
	}
	if (year < 2000)
	{
		std::cout << input << "<--- This program will not interpret years bellow 2000" << std::endl;
		return (1);
	}
	if (checkDayMonth(month, day, year) != 0)
	{
		std::cout << input << "<--- This day is invalid" << std::endl;
		return (1);
	}
	return (0);
}

int BitcoinExchange::startDb(void)
{
	std::ifstream db("data.csv");
	std::string text;

	if (!db.is_open())
		return (1);

	std::getline(db, text);
	while (std::getline(db, text))
	{
		size_t com = text.find(',');
		if (com == std::string::npos)
			return (1);
		double btcValue = strd(text.substr(com));
		if (btcValue < 0)
			return (1);
		if (checkDate(text.substr(0, com)) != 0)
			return (1);
		this->CoinEx[dateToInt(text.substr(0, com))] = btcValue;
	}
	return (0);
}

int	BitcoinExchange::readBtc(std::string input)
{
	if (startDb() != 0)
	{
		std::cout << RED << "Error reading database" << RESET << std::endl;
		return (1);
	}

	std::ifstream db(input.c_str());
	std::string text;

	if (!db.is_open())
		return (1);

	std::getline(db, text);
	while (std::getline(db, text))
	{
	}

	return (0);
}
