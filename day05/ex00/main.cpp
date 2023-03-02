/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:07:37 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/02 02:23:26 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat b1("Delphine", 153);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Bureaucrat b1("Charlie", 5);
		try
		{
			b1.setGrade(0);
		}
		catch(const std::exception& e) //recupere exception quelle qu'elle soit
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << b1 << std::endl;
		try
		{
			b1.setGrade(1);
		}
		catch(const std::exception& e) 
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << b1 << std::endl;
		try
		{
			b1.upGrade();
		}
		catch(const std::exception& e) 
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << b1 << std::endl;
		try
		{
			b1.setGrade(150);
		}
		catch(const std::exception& e) 
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << b1 << std::endl;
		try
		{
			b1.downGrade();
		}
		catch(const std::exception& e) 
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << b1 << std::endl;
		try
		{
			b1.setGrade(5);
		}
		catch(const std::exception& e) 
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << b1 << std::endl;
		try
		{
			b1.downGrade();
		}
		catch(const std::exception& e) 
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << b1 << std::endl;
	}
	return (0);
}