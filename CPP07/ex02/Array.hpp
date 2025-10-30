#pragma once

#include <iostream>
#include <exception>

template<typename T> class Array
{
	private:
		T		*arr;
		size_t	size_arr;
	public:
		Array(void) : arr(new T[0]), size_arr(0){}
		Array(size_t n) : arr(new T[n]), size_arr(n){}
		Array(Array const &other) : arr(new T[other.size_arr]), size_arr(other.size_arr)
		{
			size_t tmp = 0;

			while (tmp < other.size_arr)
			{
				this->arr[tmp] = other.arr[tmp];
				tmp++;
			}
		}
		Array &operator=(Array const &other)
		{
			if (this != &other)
			{
				delete [] this->arr;
				this->arr = new T[other.size_arr];
				size_arr = other.size_arr;
				for (size_t tmp = 0; tmp < this->size_arr; tmp++)
					this->arr[tmp] = other.arr[tmp];
			}
		}
		~Array(void){ delete [] this->arr; }
		
		class OutOfRangeException : public std::exception 
		{
			public:
				virtual const char *what() const throw();
		};

		T &operator[](size_t i)
		{
			if (i >= this->size() || !this->arr)
				throw Array<T>::OutOfRangeException();
			return (arr[i]);
		}

		unsigned int size(void) const
		{
			return this->size_arr;
		}
};

template <typename T> const char *Array<T>::OutOfRangeException::what() const throw()
{
	return "Index out of bounds";
}
