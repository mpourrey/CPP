/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:30:10 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/06 15:11:32 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
	private :
	std::string	type;
	
	public :
	const std::string	&getType() const;
	void				setType(std::string new_type);
	Weapon(std::string type);
	Weapon();
	~Weapon();
};

#endif