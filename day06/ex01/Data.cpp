/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 06:30:57 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/04 06:58:00 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void	Data::displayData()
{
	std::cout << "_i = " << _i << "| _j = " << _j << std::endl;
}

Data::Data() : _i(0), _j(0) {}

Data::Data(const Data &src) 
{
	*this = src;
}

Data::~Data() {}

Data &Data::operator=(const Data &src)
{
	_i = src._i;
	_j = src._j;
	return (*this);
}