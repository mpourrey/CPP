/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 05:18:57 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/24 01:20:38 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " wants to high fives!" 
		<< std::endl;
}

/* ------------------------------------------------- FCTS MEMBRES SURCHARGEES */
void	FragTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " can't attack." << std::endl;
	}
	else
	{
		std::cout << "Fragtrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage!"
			<< std::endl;
		_energyPoints -= 1;
	}
}

/* ------------------------------------------------- CONSTRUCTEURS SURCHARGES */
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
 	_name = "Anonymous";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
 	_name = name;
 	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}


FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}