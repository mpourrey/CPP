/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:34:39 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 03:52:55 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
void		Cat::setBrainIdea(int i, std::string idea)
{
	_brain->setIdea(i, idea);
}

std::string	Cat::getBrainIdea(int i) const
{
	return (_brain->getIdea(i));
}

/* --------------------------------------------------- SURCHARGE FCTS MEMBRES */
void		Cat::makeSound() const
{
	std::cout << "*meow*" << std::endl;
}

/* -------------------------------------------------- SURCHARGE CONSTRUCTEURS */
Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "cat";
	_brain = new Brain();

}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain();
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete(_brain);
}

/* --------------------------------------------------------------- SURCHARGES */
Cat	&Cat::operator=(const Cat &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	*_brain = *src._brain;
	return (*this);
}