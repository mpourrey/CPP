/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:10:04 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/19 00:31:00 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	Fixed	nb;
	Fixed	nb2(nb);
	Fixed	nb3;

	nb3 = nb2;
	
	std::cout << nb.getRawBits() << std::endl;
	std::cout << nb2.getRawBits() << std::endl;
	std::cout << nb3.getRawBits() << std::endl;
	
	return (0);
}