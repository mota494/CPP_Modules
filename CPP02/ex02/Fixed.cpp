/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:17:29 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/31 12:20:14 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixed_point(0) { std::cout << "Constructor call\n"; }

Fixed::~Fixed() { std::cout << "Destructor call\n"; }

Fixed::Fixed(const Fixed &o_fixed) : fixed_point(o_fixed.fixed_point) { std::cout << "Copy constructor call\n"; }

Fixed::Fixed (const int input)
{
	std::cout << "INT constructor call\n";
	this->fixed_point = input << frac_bits;
}

Fixed::Fixed (const float input)
{
	std::cout << "FLOAT constructor call\n";
	this->fixed_point = static_cast<int>(roundf(input * (1 << frac_bits)));
}

Fixed &Fixed::operator=(const Fixed &o_fixed)
{
	std::cout << "Copy call\n";
	if (this != &o_fixed)
		this->fixed_point = o_fixed.fixed_point;
	return *this;
}

void	Fixed::setRawBits(int input)
{
	std::cout << "setRawBits call\n";
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
