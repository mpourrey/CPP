/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:56:08 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/22 17:37:27 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define INT_MAX 2147483647
# define INT_MIN -2147483648
////max pour decalage de 8 : 8388607
////min pour decalage de 8 : -8388608

class	Fixed
{
	private:
	int					rawBits;
	static const int	nbBits;

	public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
	Fixed();
	Fixed(const Fixed &nb);
	Fixed(const int integer); //convertit en virgule fixe
	Fixed(const float floatingPoint); //convertit en virgule fixe
	~Fixed();
	
	Fixed	&operator=(const Fixed &other);

};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif
