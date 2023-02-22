/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:10:04 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/22 01:46:51 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	{
		std::cout << std::endl << "-------------------------------------INCR / DECREMENTATON"
			<< std::endl;
		Fixed a;
			
		std::cout << "a = " << a << std::endl;
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a++ = " << a++ << std::endl;
		std::cout << "a = " << a << std::endl;
 		
	}
	{
		std::cout << std::endl << "---------------------------------------------ARITHMETIQUE"
			<< std::endl;
		Fixed const a( Fixed( 5.05f ) * Fixed( 2 ) );
		Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
		Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
		Fixed const d( Fixed( 5.05f ) - Fixed( 2 ) );
		
		std::cout << "5.05 * 2 = " << a << std::endl;
		std::cout << "5.05 / 2 = " << b << std::endl;
		std::cout << "5.05 + 2 = " << c << std::endl;
		std::cout << "5.05 - 2 = " << d << std::endl;

	}
	{
		std::cout << std::endl << "----------------------------------------------COMPARAISON"
			<< std::endl;
		Fixed	a(0.1f);
		Fixed	b(0.2f);
		Fixed	c(0.11f);
		Fixed	d(0.11f);

		if (a > b)
			std::cout << a << " > " << b << std::endl;
		if (a < b)
			std::cout << a << " < " << b << std::endl; //pass
		if (a >= c)
			std::cout << a << " >= " << c << std::endl;
		if (a <= c)
			std::cout << a << " <= " << c << std::endl; //pass
		if (a == c)
			std::cout << a << " == " << c << std::endl;
		if (c == d)
			std::cout << c << " == " << d << std::endl; //pass
	
	}
	{
		std::cout << std::endl << "---------------------------------FCTS MEMBRES SURCHARGEES"
			<< std::endl;
		Fixed		a(1);
		Fixed		b(2);
		const Fixed	const_a(1);
		const Fixed	const_b(2);
		
		std::cout << "min(" << a << "," << b << ") = " << Fixed::min( a, b ) << std::endl; 
		std::cout << "min(" << const_a << "," << const_b << ") = " << Fixed::min( const_a, const_b ) << std::endl; 
		std::cout << "max(" << a << "," << b << ") = " << Fixed::max( a, b ) << std::endl; 
		std::cout << "max(" << const_a << "," << const_b << ") = " << Fixed::max( const_a, const_b ) << std::endl; 

	}
	return 0;
}