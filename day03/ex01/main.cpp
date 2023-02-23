/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:00:35 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/23 05:12:48 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	a("Georges");
	ScavTrap	b("Ginette");
	
	std::cout << std::endl;
	a.attack("Suzanne");
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
	a.attack("Suzanne");
	std::cout << std::endl;
	a.guardGate();
	std::cout << std::endl;
	return (0);
}