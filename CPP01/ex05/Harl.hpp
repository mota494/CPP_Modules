#pragma once

#include <iostream>

#define INFO "\033[38;5;94m"
#define WARNING "\033[38;5;196m"
#define ERROR "\033[38;5;52m"
#define DEBUG "\033[38;5;33m"
#define RESET "\033[0m"

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		void complain(std::string level);
};
