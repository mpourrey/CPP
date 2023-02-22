/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:06:08 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/20 14:25:46 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "createZombie.hpp"

int	main()
{
	Zombie	*zombie;
	Zombie	anonymous_z;

	zombie = newZombie("Marcel");
	(*zombie).announce();
	delete zombie;
	randomChump("Clotilde");
	anonymous_z.announce();
	return (0);
}