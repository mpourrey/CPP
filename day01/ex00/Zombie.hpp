/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:28:59 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/06 15:03:00 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>


class Zombie
{
	private :
	std::string	name;

	public :
	void	announce(void) const;
	Zombie();
	Zombie(std::string name);
	~Zombie(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif