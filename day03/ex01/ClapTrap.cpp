/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:35:24 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/23 01:34:12 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount
		<< " damage points!" << std::endl;
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " gets " << amount
			<< " hit points!" << std::endl;
		_hitPoints += amount;
		_energyPoints -= 1;
	}
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage!"
			<< std::endl;
		_energyPoints -= 1;
	}
}

void	ClapTrap::printAttributes() const
{
		std::cout << _name
		<< " : hitPoints : " << _hitPoints 
		<< " | energyPoints : " << _energyPoints
		<< " | attackDamage : " << _attackDamage << std::endl;
}


/* ------------------------------------------------------------ CONSTRUCTEURS */
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	_name = "Anonymous";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Constructor called" << std::endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "Destructor called" << std::endl;
}

/* --------------------------------------------------------------- SURCHARGES */
ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	return (*this);
}


