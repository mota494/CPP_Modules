#pragma once

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <algorithm>

#define GREEN "\033[38;5;83m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define PRETTY "\033[38;5;69m"
#define RESET "\033[0m"

class BitcoinExchange
{
	private:
		std::map<std::string, double> CoinEx;
		int			startDb(void);
		int			checkDate(std::string input);
		double		strd(std::string input);
		int			stri(std::string input);
		std::string	dateToInt(std::string input);
		bool		isLeapYear(int year);
		int			checkDayMonth(int month, int day, int year);
		int			readInput(std::string input);
		double		conversion(std::string date, double value);
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &o_BitEx);
		BitcoinExchange &operator=(const BitcoinExchange &o_BitEx);
		~BitcoinExchange(void);
		int readBtc(std::string input);
};
