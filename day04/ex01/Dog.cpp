/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:35:15 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 03:36:35 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
void		Dog::setBrainIdea(int i, std::string idea)
{
	_brain->setIdea(i, idea);
}

std::string	Dog::getBrainIdea(int i) const
{
	return (_brain->getIdea(i));
}

/* --------------------------------------------------- SURCHARGE FCTS MEMBRES */
void		Dog::makeSound() const
{
	std::cout << "*bark bark*" << std::endl;
}

/* -------------------------------------------------- SURCHARGE CONSTRUCTEURS */
Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete(_brain);
}

/* --------------------------------------------------------------- SURCHARGES */
Dog	&Dog::operator=(const Dog &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	_brain = new Brain(*src._brain);
	return (*this);
}