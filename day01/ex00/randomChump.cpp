/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:43:28 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/20 14:43:31 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "createZombie.hpp"

void	randomChump(std::string name)
{
	Zombie zombie(name);
	
	zombie.announce();
}