/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:59:23 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/06 15:11:15 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

	const std::string	&Weapon::getType() const
	{	
		return (this->type);
	}

	void	Weapon::setType(std::string new_type)
	{
		this->type = new_type;
	}

	Weapon::Weapon(std::string type)
	{
		this->type = type;
	}

	Weapon::Weapon(){}

	Weapon::~Weapon(){}
	
	