/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:49:48 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/02 23:28:40 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private :
	Weapon 		weapon;
	std::string	name;
	
	public :
	void	attack();
	void	setWeapon(Weapon weapon);
	HumanB(std::string name);
	~HumanB();
};

#endif