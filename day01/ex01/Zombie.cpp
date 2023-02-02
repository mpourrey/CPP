/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:28:40 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/02 20:45:28 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::set_name(std::string name)
{
	this->name = name;	
}

void	Zombie::announce(void)
{
	std::cout << this->name 
				<< ": BraiiiiiiinnnzzzZ..."
				<< std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name 
				<< " has been destroyed"
				<< std::endl;
}

Zombie::Zombie() {}