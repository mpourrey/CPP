/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 01:40:15 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/24 01:40:20 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
std::string	WrongAnimal::getType() const
{
	return (_type);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "*unidentified sound*" << std::endl;
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	_type = "unknown";
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) 
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

/* --------------------------------------------------------------- SURCHARGES */
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	_type = src._type;
	return (*this);
}