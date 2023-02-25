/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:35:15 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/24 00:56:07 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* --------------------------------------------------- SURCHARGE FCTS MEMBRES */
void	Dog::makeSound() const
{
	std::cout << "*bark bark*" << std::endl;
}

/* -------------------------------------------------- SURCHARGE CONSTRUCTEURS */
Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "dog";
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
