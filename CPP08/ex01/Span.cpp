#include "Span.hpp"

Span::Span(unsigned int N) : maxStored(N) 
{
	this->numStored = 0;
}

Span::~Span(){}

Span::Span(const Span &o_span)
{
	this->List = o_span.List;
	this->maxStored = o_span.maxStored;
	this->numStored = o_span.numStored;
}


Span &Span::operator = (const Span &o_span)
{
	if (this == &o_span)
		return (*this);
	this->List = o_span.List;
	this->maxStored = o_span.maxStored;
	this->numStored = o_span.numStored;
	return *this;
}

const char *Span::NoSpace::what() const throw()
{
	return ("No space in the list to add the number");
}

const char *Span::NoNumbers::what() const throw()
{
	return ("No span possible with 0 or 1 number on the list");
}

int Span::longestSpan()
{
	if (this->numStored <= 1 || this->maxStored <= 1)
		throw NoNumbers();
	
	std::vector<int>::const_iterator it_max;
	std::vector<int>::const_iterator it_min;
	
	it_max = std::max_element(this->List.begin(), this->List.end());
	it_min = std::min_element(this->List.begin(), this->List.end());
	
	return (abs(*it_max - *it_min));
}

int Span::shortestSpan()
{
	if (this->numStored <= 1 || this->maxStored <= 1)
		throw NoNumbers();

	std::vector<int> temp(this->List);
	std::sort(temp.begin(), temp.end());
	std::vector<int>::iterator iter = temp.begin();
	int store_small = abs(*iter - *(iter + 1));
	unsigned int i = 0;

	while (i + 1 != this->numStored)
	{
		if (abs(*iter - *(iter + 1)) < store_small)
			store_small = abs(*iter - *(iter + 1));
		i++;
	}
	return (store_small);
}

void Span::addNumber(int N)
{
	if (this->numStored + 1 > this->maxStored)
		throw NoSpace();
	else
	{
		this->List.push_back(N);
		this->numStored++;
	}
}
