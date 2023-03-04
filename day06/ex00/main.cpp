/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:30:53 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/04 06:15:00 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Litteral.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please enter one argument." << std::endl;
		return (1);
	}
	
	Litteral a(argv[1]);
	
	try
	{
		a.parseType();
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	try
	{
		a.computeTypedValue();
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	a.displayValues();
}