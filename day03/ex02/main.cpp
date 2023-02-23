/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:00:35 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/23 05:31:52 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	a("Louis");
	FragTrap	b("Martine");
	
	std::cout << std::endl;
	a.attack("Henri");
	a.printAttributes();
	std::cout << std::endl;
	b.takeDamage(2);
	b.printAttributes(); 
	std::cout << std::endl;
	a.beRepaired(2);
	a.printAttributes();
	std::cout << std::endl;
	a.takeDamage(110);
	a.printAttributes();
	std::cout << std::endl;
	a.attack("Henri");
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl;
	return (0);
}