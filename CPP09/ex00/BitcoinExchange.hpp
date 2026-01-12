#pragma once

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

#define GREEN "\033[38;5;83m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define PRETTY "\033[38;5;69m"
#define RESET "\033[0m"

class BitcoinExchange
{
	private:
		std::map<std::string, double, int> CoinEx;
		int startDb(void);
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &o_BitEx);
		BitcoinExchange &operator=(const BitcoinExchange &o_BitEx);
		~BitcoinExchange(void);
		int readBtc(std::string input);
};
