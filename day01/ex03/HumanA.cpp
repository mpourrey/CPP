/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:41:59 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/02 23:25:33 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->name 
			<< " attacks with their "
			<< this->weapon.getType() 
			<< std::endl;
}

HumanA::HumanA(std::string name, Weapon weapon) 
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA() {}