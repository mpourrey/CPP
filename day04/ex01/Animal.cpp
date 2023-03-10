/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:08:28 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 06:26:16 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
std::string	Animal::getBrainIdea(int i) const
{
	(void)i;
	return ("");
}

void		Animal::setBrainIdea(int i, std::string idea)
{
	(void)i;
	(void)idea;
}

std::string	Animal::getType() const
{
	return (_type);
}

void		Animal::makeSound() const
{
	std::cout << "*unidentified sound*" << std::endl;
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