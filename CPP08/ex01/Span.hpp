#pragma once

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

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

		class NoSpace : public std::exception
		{
			const char *what() const throw();
		};

		class NoNumbers : public std::exception
		{
			const char *what() const throw();
		};
};
