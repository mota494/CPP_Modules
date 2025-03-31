/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:59:02 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/31 12:14:30 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int	fixed_point;
		static const int frac_bits = 8;
	public:
		/*canonical form*/
		Fixed () ;
		Fixed(const int input);
		Fixed(const float input);
		Fixed (const Fixed &o_fixed);
		~Fixed () ;
		Fixed & operator = (const Fixed & o_fixed);
		/*functions*/
		void	setRawBits(int input);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator << (std::ostream& out, const Fixed& input);
