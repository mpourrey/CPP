/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:28:48 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/06 15:02:50 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << this->name 
				<< " has been destroyed"
				<< std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name 
				<< " is born"
				<< std::endl;
}

Zombie::Zombie()
{
	this->name = "Anonymous";
	std::cout << this->name 
				<< " is born"
				<< std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->name 
				<< ": BraiiiiiiinnnzzzZ..."
				<< std::endl;
}

