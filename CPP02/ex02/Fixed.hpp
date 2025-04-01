/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:59:02 by mloureir          #+#    #+#             */
/*   Updated: 2025/04/01 15:28:54 by mloureir         ###   ########.pt       */
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
		/*overloads*/
		Fixed operator + (const Fixed &o_fixed) const;
		Fixed operator - (const Fixed &o_fixed) const;
		Fixed operator * (const Fixed &o_fixed) const;
		Fixed operator / (const Fixed &o_fixed) const;

		bool operator < (const Fixed &o_fixed) const;
		bool operator > (const Fixed &o_fixed) const;
		bool operator >= (const Fixed &o_fixed) const;
		bool operator <= (const Fixed &o_fixed) const;
		bool operator == (const Fixed &o_fixed) const;
		bool operator != (const Fixed &o_fixed) const;
		
		Fixed operator ++ ();
		Fixed operator ++ (int);
		Fixed operator -- ();
		Fixed operator -- (int);
		/*functions*/
		void	setRawBits(int input);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed& max (Fixed &f_fixed, Fixed &s_fixed);
		static const Fixed& max (const Fixed &f_fixed, const Fixed &s_fixed);
		static Fixed& min (Fixed &f_fixed, Fixed &s_fixed);
		static const Fixed& min (const Fixed &f_fixed, const Fixed &s_fixed);
};

std::ostream& operator << (std::ostream& out, const Fixed& input);
