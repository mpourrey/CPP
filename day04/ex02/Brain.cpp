/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 04:58:56 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 04:08:18 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
void		Brain::setIdea(int i, std::string idea)
{
	if (i < 0 || i > 99)
	{
		std::cout << "Please enter a valid index, animal can have 100 ideas." << std::endl;
		return ;
	}
	_ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	if (i < 0 || i > 99)
	{
		std::cout << "Please enter a valid index, animal can have 100 ideas." << std::endl;
		return ("");
	}
	return (_ideas[i]);
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

/* --------------------------------------------------------------- SURCHARGES */
Brain	&Brain::operator=(const Brain &src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 100; i++)	
		_ideas[i] = src._ideas[i];
	return (*this);
}