/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:49:58 by mpourrey          #+#    #+#             */
/*   Updated: 2023/01/15 19:23:37 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp" 

int		is_valid_index(std::string index)
{
	if (index == "0" || index == "1" || index == "2" || index == "3"
		|| index == "4" || index == "5" || index == "6" || index == "7")
		return (1);
	return (0);
}

void	print_white_spaces(int i)
{
	for (int j = 0; j < i; j++)
		std::cout << ' ';
}