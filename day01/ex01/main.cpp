/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:40:07 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/06 15:00:57 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "zombieHorde.hpp"

int	main()
{
	int		N;
	Zombie	*zombieTab; 

	N = 10;
	zombieTab = zombieHorde(N, "Albert");
	for (int i = 0; i < N; i++)
		zombieTab[i].announce();
	delete [] zombieTab;
	return (0);
}