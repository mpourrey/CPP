/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:34:39 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 06:41:58 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

/* --------------------------------------------------- SURCHARGE FCTS MEMBRES */
void	Cat::makeSound() const
{
	std::cout << "*meow*" << std::endl;
}

/* -------------------------------------------------- SURCHARGE CONSTRUCTEURS */
Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "cat";
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
