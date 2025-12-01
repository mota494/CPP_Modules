#pragma once

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

#define GREEN "\033[38;5;83m"
#define YELLOW "\033[38;5;220m"
#define RED "\033[38;5;196m"
#define PRETTY "\033[38;5;69m"
#define RESET "\033[0m"

class Span
{
	private:
		unsigned int maxStored;
		unsigned int numStored;
		std::vector<int> List;
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &o_span);
		Span & operator = (const Span &o_span);
		
		void	addNumber(int N);
		int		longestSpan();
		int		shortestSpan();

		class NoSpace : public std::exception
		{
			const char *what() const throw();
		};

		class NoNumbers : public std::exception
		{
			const char *what() const throw();
		};
};
