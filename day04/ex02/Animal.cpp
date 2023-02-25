/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:08:28 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 06:29:34 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
std::string	Animal::getType() const
{
	return (_type);
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	_type = "unknown";
}

Animal::Animal(std::string type) : _type(type) 
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

/* --------------------------------------------------------------- SURCHARGES */
Animal	&Animal::operator=(const Animal &src)
{
	_type = src._type;
	return (*this);
}