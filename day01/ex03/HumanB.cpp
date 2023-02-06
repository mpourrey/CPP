/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:49:50 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/06 16:00:50 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack() const
{
	std::cout << this->_name
		 		<< " attacks with their ";
			
	if (this->_weapon)
		std::cout << (*this->_weapon).getType() << std::endl;
	else
		std::cout << "hands" << std::endl;	
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name) : _name(name) 
{
	this->_weapon = NULL;
}

HumanB::~HumanB() {}
