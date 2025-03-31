/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:59:02 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/24 11:59:15 by mloureir         ###   ########.pt       */
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
		Fixed(int o_fixedPoint);
		Fixed (const Fixed &o_fixed);
		~Fixed () ;
		Fixed & operator = (const Fixed & o_fixed);
		/*functions*/
		void	setRawBits(int input);
		int		getRawBits(void) const;
};
