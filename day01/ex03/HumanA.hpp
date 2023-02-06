/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:37:50 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/06 15:30:42 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private :
	std::string	_name;
	Weapon 		&_weapon;
	
	public :
	void	attack() const;
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

#endif