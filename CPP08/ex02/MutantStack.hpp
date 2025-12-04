#pragma once

#include <iostream>
#include <stack>
#include <list>

template<typename T> class MutantStack : public std::stack<T>
{
	public:
		typedef std::stack<T> Stack;
		typedef typename Stack::container_type Container;
		typedef typename Container::iterator Iterator;
		typedef typename Container::const_iterator ConstIterator;

		MutantStack(void) : Stack() {};
		MutantStack(const MutantStack &other) : Stack(other) {};
		MutantStack &operator=(const MutantStack &other) {
			if (this != &other)
				*this = other;
			return *this;
		};

		Iterator Begin(void) { return (Stack::c.begin()); }
		Iterator End(void) { return (Stack::c.end()); }
		ConstIterator Begin(void) const { return (Stack::c.begin()); }
		ConstIterator End(void) const { return (Stack::c.end()); }
};
