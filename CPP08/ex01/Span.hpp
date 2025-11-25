#pragma once

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
};
