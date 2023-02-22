/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:05:03 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/22 17:46:04 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nbBits = 8;

/* FONCTIONS MEMBRES -------------------------------------------------------- */

int		Fixed::toInt(void) const
{
	int	integer;

	integer = this->getRawBits() / std::pow(2, this->nbBits);
	return (integer); 
}

float	Fixed::toFloat(void) const
{
	float floatingPoint;

	floatingPoint = this->getRawBits() / std::pow(2, this->nbBits);
	return (floatingPoint);
}

int		Fixed::getRawBits() const
{
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

/* CONSTRUCTEURS - DESTRUCTEUR ---------------------------------------------- */

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed &nb)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = nb;
}

Fixed::Fixed(const int integer) //convertit en virgule fixe
{
	std::cout << "Int constructor called" << std::endl;
	if (integer > INT_MAX / std::pow(2, this->nbBits) 
		|| integer < INT_MIN / std::pow(2, this->nbBits))
	{
		std::cout << "Error: Fixed point overflow" << std::endl;
		exit (1);
	}
	this->rawBits = integer * std::pow(2, this->nbBits);
}

Fixed::Fixed(const float floatingPoint) //convertit en virgule fixe
{
	std::cout << "Float constructor called" << std::endl;
	if (roundf(floatingPoint) > INT_MAX / std::pow(2, this->nbBits) 
		|| roundf(floatingPoint) < INT_MIN / std::pow(2, this->nbBits))
	{
		std::cout << "Error: Fixed point overflow" << std::endl;
		exit (1);
	}
	this->rawBits = roundf(floatingPoint * std::pow(2, this->nbBits));
}    

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* SURCHARGE OPERATEURS ----------------------------------------------------- */

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &other)
		this->rawBits = other.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
