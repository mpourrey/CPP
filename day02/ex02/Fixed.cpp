/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:05:03 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/22 01:40:47 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nbBits = 8;

/* -------------------------------------------------------- FONCTIONS MEMBRES */

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

/* -------------------------------------------- FONCTIONS MEMBRES SURCHARGEES */

Fixed		Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed		Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}


/* ---------------------------------------------- CONSTRUCTEURS / DESTRUCTEUR */

Fixed::Fixed()
{
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed &nb)
{
	*this = nb;
}

Fixed::Fixed(const int integer)
{
	if (integer > INT_MAX / std::pow(2, this->nbBits) 
		|| integer < INT_MIN / std::pow(2, this->nbBits))
	{
		std::cout << "Error: Fixed point overflow in constructor" << std::endl;
		exit (1);
	}
	this->rawBits = integer * std::pow(2, this->nbBits);
}

Fixed::Fixed(const float floatingPoint)
{
	if (roundf(floatingPoint) > INT_MAX / std::pow(2, this->nbBits) 
		|| roundf(floatingPoint) < INT_MIN / std::pow(2, this->nbBits))
	{
		std::cout << "Error: Fixed point overflow in constructor" << std::endl;
		exit (1);
	}
	this->rawBits = roundf(floatingPoint * std::pow(2, this->nbBits));
}    

Fixed::~Fixed()
{
}

/* ----------------------------------------------------- SURCHARGE OPERATEURS */

/* -------------------------------------------------------------- AFFECTATION */
/* operateur d'affectation -------------------------------------------------- */
Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->rawBits = other.getRawBits();
	return (*this);
}

/* ------------------------------------------ INCREMENTATION / DECREMENTATION */
/* operateur post incrementation -------------------------------------------- */
Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	
	tmp = *this;
	this->rawBits += 1;
	if (this->rawBits == INT_MAX)
	{
		std::cout << "Error: Fixed point overflow in post-incrementation" 
			<< std::endl;
		exit (1);
	}
	return (tmp);
}

/* operateur pre incrementation --------------------------------------------- */
Fixed 	&Fixed::operator++()
{
	this->rawBits += 1;
	if (this->rawBits == INT_MAX)
	{
		std::cout << "Error: Fixed point overflow in pre-incrementation" 
			<< std::endl;
		exit (1);
	}
	return (*this);
}

/* operateur post decrementation -------------------------------------------- */
Fixed 	Fixed::operator--(int)
{
	Fixed	tmp;
	
	tmp = *this;
	this->rawBits -= 1;
	if (this->rawBits == INT_MIN)
	{
		std::cout << "Error: Fixed point overflow in post-incrementation" 
			<< std::endl;
		exit (1);
	}
	return (tmp);
}

/* operateur pre decrementation --------------------------------------------- */
Fixed 	&Fixed::operator--()
{
	this->rawBits -= 1;
	if (this->rawBits == INT_MIN)
	{
		std::cout << "Error: Fixed point overflow in pre-incrementation" 
			<< std::endl;
		exit (1);
	}
	return (*this);
}

/* ------------------------------------------------------------- ARITHMETIQUE */
/* operateur de multiplication ---------------------------------------------- */
Fixed	Fixed::operator*(const Fixed &other) const
{
	float	floatingProduct;
	
	floatingProduct = (this->getRawBits() / std::pow(2, this->nbBits)) 
		* (other.getRawBits() / std::pow(2, this->nbBits));
	
	Fixed dst(floatingProduct);
	return (dst);
}

/* operateur de division ---------------------------------------------------- */
Fixed	Fixed::operator/(const Fixed &other) const
{
	float	floatingProduct;
	
	floatingProduct = (this->getRawBits() / std::pow(2, this->nbBits)) 
		/ (other.getRawBits() / std::pow(2, this->nbBits));
	
	Fixed dst(floatingProduct);
	return (dst);
}

/* operateur d'addition ----------------------------------------------------- */
Fixed	Fixed::operator+(const Fixed &other) const
{
	float	floatingProduct;
	
	floatingProduct = (this->getRawBits() / std::pow(2, this->nbBits)) 
		+ (other.getRawBits() / std::pow(2, this->nbBits));
	
	Fixed dst(floatingProduct);
	return (dst);
}

/* operateur de soustraction ------------------------------------------------ */
Fixed	Fixed::operator-(const Fixed &other) const
{
	float	floatingProduct;
	
	floatingProduct = (this->getRawBits() / std::pow(2, this->nbBits)) 
		- (other.getRawBits() / std::pow(2, this->nbBits));
	
	Fixed dst(floatingProduct);
	return (dst);
}

/* -------------------------------------------------------------- COMPARAISON */
bool	Fixed::operator>(const Fixed &other) const
{
	if (this->rawBits > other.rawBits)
		return (1);
	return (0);
}

bool	Fixed::operator<(const Fixed &other) const
{
	if (this->rawBits < other.rawBits)
		return (1);
	return (0);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	if (this->rawBits >= other.rawBits)
		return (1);
	return (0);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	if (this->rawBits <= other.rawBits)
		return (1);
	return (0);
}

bool	Fixed::operator==(const Fixed &other) const
{
	if (this->rawBits == other.rawBits)
		return (1);
	return (0);
}

/* ---------------------------------------------------------------- INSERTION */
/* operateur d'insertion ---------------------------------------------------- */
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
