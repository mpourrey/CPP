/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:10:04 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/24 16:52:42 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	{
		std::cout << std::endl << "---------------------------------TESTS SUJET"
			<< std::endl;
		Fixed a;
 		Fixed const b( 10 );
		Fixed const c( 42.42f );
		Fixed const d( b );
		
		a = Fixed( 1234.4321f );
		
		std::cout << "a is " << a << std::endl;
 		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	{
		std::cout << std::endl << "---------------------------GESTION D'ERREURS"
			<< std::endl;
		Fixed	a(8388608);
		Fixed	b(8388607.9f);

		std::cout << "a is " << a << std::endl;
 		std::cout << "b is " << b << std::endl;

	}
	return 0;
}