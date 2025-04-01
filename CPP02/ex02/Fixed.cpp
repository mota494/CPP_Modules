/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:17:29 by mloureir          #+#    #+#             */
/*   Updated: 2025/04/01 15:29:33 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixed_point(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &o_fixed) : fixed_point(o_fixed.fixed_point) {}

Fixed::Fixed (const int input)
{
	this->fixed_point = input << frac_bits;
}

Fixed::Fixed (const float input)
{
	this->fixed_point = static_cast<int>(roundf(input * (1 << frac_bits)));
}

Fixed &Fixed::operator=(const Fixed &o_fixed)
{
	if (this != &o_fixed)
		this->fixed_point = o_fixed.fixed_point;
	return *this;
}

void	Fixed::setRawBits(int input)
{
	this->fixed_point = input;
}

int	Fixed::toInt(void) const
{
	return this->fixed_point >> this->frac_bits;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->fixed_point) / (1 << frac_bits);
}

std::ostream& operator << (std::ostream& out, const Fixed& input)
{
	float toret = input.toFloat();
	out << toret;
	return out;
}

int		Fixed::getRawBits(void) const { std::cout << "getRawBits call\n"; return this->fixed_point; };

/* OVERLOADS */

Fixed Fixed::operator+(const Fixed &o_fixed) const { return this->toFloat() + o_fixed.toFloat(); }
Fixed Fixed::operator-(const Fixed &o_fixed) const { return this->toFloat() - o_fixed.toFloat(); }
Fixed Fixed::operator*(const Fixed &o_fixed) const { return this->toFloat() * o_fixed.toFloat(); }
Fixed Fixed::operator/(const Fixed &o_fixed) const { return this->toFloat() / o_fixed.toFloat(); }
bool Fixed::operator<(const Fixed &o_fixed) const { return this->fixed_point < o_fixed.fixed_point; }
bool Fixed::operator>(const Fixed &o_fixed) const { return this->fixed_point > o_fixed.fixed_point; }
bool Fixed::operator>=(const Fixed &o_fixed) const { return this->fixed_point >= o_fixed.fixed_point; }
bool Fixed::operator<=(const Fixed &o_fixed) const { return this->fixed_point <= o_fixed.fixed_point; }
bool Fixed::operator!=(const Fixed &o_fixed) const { return this->fixed_point != o_fixed.fixed_point; }
bool Fixed::operator==(const Fixed &o_fixed) const { return this->fixed_point == o_fixed.fixed_point; }

Fixed Fixed::operator ++()
{
	fixed_point++;
	return *this;
}

Fixed Fixed::operator ++(int)
{
	Fixed temp;

	temp = *this;
	this->fixed_point++;
	return (temp);
}

Fixed Fixed::operator --()
{
	fixed_point--;
	return *this;
}

Fixed Fixed::operator --(int)
{
	Fixed temp;

	temp = *this;
	this->fixed_point--;
	return (temp);
}

Fixed& Fixed::max(Fixed& f_fixed, Fixed& s_fixed)
{
	if (f_fixed >= s_fixed)
		return (f_fixed);
	else
		return (s_fixed);
}

const Fixed& Fixed::max(const Fixed& f_fixed,const Fixed& s_fixed)
{
	if (f_fixed >= s_fixed)
		return (f_fixed);
	else
		return (s_fixed);
}

Fixed& Fixed::min(Fixed& f_fixed, Fixed& s_fixed)
{
	if (f_fixed >= s_fixed)
		return (s_fixed);
	else
		return (f_fixed);
}

const Fixed& Fixed::min(const Fixed& f_fixed,const Fixed& s_fixed)
{
	if (f_fixed >= s_fixed)
		return (s_fixed);
	else
		return (f_fixed);
}
