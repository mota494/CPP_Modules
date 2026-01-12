#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) : CoinEx(){};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &o_BitEx) : CoinEx(o_BitEx.CoinEx){};

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &o_BitEx)
{
	this->CoinEx = o_BitEx.CoinEx;
	return *this;
};

BitcoinExchange::~BitcoinExchange(void){};

int BitcoinExchange::startDb(void)
{
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
