/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:28:44 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/02 20:48:25 by mpourrey         ###   ########.fr       */
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
	void	announce(void);
	void	set_name(std::string name);
	Zombie();
	~Zombie(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif