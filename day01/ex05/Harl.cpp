/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:18:42 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/04 16:49:20 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
			<< std::endl
			<< "I really do !" 
			<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." 
			<< std::endl
			<< "You didn’t put enough bacon in my burger !"
			<< std::endl
			<< "If you did, I wouldn’t be asking for more !" 
			<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." 
			<< std::endl 
			<< "I’ve been coming for years whereas you started working here since last month." 
			<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable !"
			<< std::endl 
			<< "I want to speak to the manager now." 
			<< std::endl;
}

void	Harl::complain(std::string level)
{
	void			(Harl::*functions[4])();
	std::string		levels[4];
	int				i;
	
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
	
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			break;
		}
		i++;
		if (i == 4)
			std::cout << "Please enter a valid level" << std::endl;
	}
}

Harl::Harl() {}
Harl::~Harl() {}
