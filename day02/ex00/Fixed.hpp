/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:56:08 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/21 23:43:21 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream> 

class	Fixed
{
	private:
	int					rawBits;
	static const int	nbBits;

	public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	Fixed();
	Fixed(const Fixed &nb);
	~Fixed();
	Fixed &operator=(const Fixed &other);
};

#endif
