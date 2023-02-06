/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:49:48 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/06 16:01:00 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private :
	std::string	_name;
	Weapon		*_weapon;
	
	public :
	void	attack() const;
	void	setWeapon(Weapon &weapon);
	HumanB(std::string name);
	~HumanB();
};

#endif