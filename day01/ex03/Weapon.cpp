/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:59:23 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/03 13:27:01 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

	const std::string	&Weapon::getType()
	{
		std::string			&tmp = this->type;
		const std::string	&c_tmp = tmp; 
		
		return (c_tmp);
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
	
	