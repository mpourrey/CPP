/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:18:42 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/03 19:03:54 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	
}

void	Harl::warning(void)
{
	
}

void	Harl::error(void)
{
	
}

void	Harl::complain(std::string level)
{

	char	function[level.length()];
	int		len;
	 
	len = level.length();
	for (int i = 0; i < len; i++)
		function[i] = tolower(level[i]);

//	this->debug();
 
	void	(Harl::*ptr)() = &Harl::debug;
	
	(this->*ptr)();
}


Harl::Harl() {}
Harl::~Harl() {}
