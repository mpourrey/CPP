/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:00:35 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/23 03:00:02 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Albert");
	ClapTrap	b("Bertrand");
	
	std::cout << std::endl;
	a.attack("Rodolphe");
	a.printAttributes();
	std::cout << std::endl;
	b.takeDamage(2);
	b.printAttributes(); 
	std::cout << std::endl;
	a.beRepaired(10);
	a.printAttributes();
	std::cout << std::endl;
	a.takeDamage(21);
	a.printAttributes();
	std::cout << std::endl;
	a.attack("Rodolphe");
	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		b.attack("Mireille");
		b.printAttributes();
	}
	std::cout << std::endl;
	b.attack("Mireille");
	std::cout << std::endl;
	return (0);
}