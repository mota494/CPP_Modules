/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:17:29 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/24 11:59:47 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0) { std::cout << "Constructor call\n"; }

Fixed::~Fixed() { std::cout << "Destructor call\n"; }

Fixed::Fixed(const Fixed &o_fixed) : fixed_point(o_fixed.fixed_point) { std::cout << "Copy constructor call\n"; }

Fixed::Fixed(int o_fixedPoint) : fixed_point(o_fixedPoint){}

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

int		Fixed::getRawBits(void) const { std::cout << "getRawBits call\n"; return this->fixed_point; };
