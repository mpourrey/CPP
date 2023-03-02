/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:07:37 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/02 05:45:07 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
/* 	std::cout << "------------------------- BUREAUCRATS CONSTRUCTOR AND SETTERS"
		<< std::endl;
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
		catch(const std::exception& e)
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
	 */
	std::cout << std::endl;
	std::cout << "------------------------------------------- FORMS CONSTRUCTOR"
		<< std::endl;

	{
		std::cout << "* Instanciation succes *" << std::endl;
		try
		{
			Form a;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "* Instanciation error *" << std::endl;
		try
		{
			Form b("Blablabla", 15, 158);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	//beSigned change le statut du form en signe
	std::cout << std::endl;
	std::cout << "--------------------------------------------- FORMS SIGNATURE"
		<< std::endl;
	{
		Form a("Blablabla", 15, 15);
		std::cout << a << std::endl;
		
		std::cout << "* beSigned error *" << std::endl;
		Bureaucrat	c("Mireille", 16);
		try
		{
			a.beSigned(c.getGrade());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << a << std::endl;
		
		std::cout << "* beSigned succes *" << std::endl;
		Bureaucrat	b("Jacques", 12);
		try
		{
			a.beSigned(b.getGrade());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << a << std::endl;		
	}
	
	//signForm ne change pas le statut du form
	std::cout << std::endl;
	std::cout << "--------------------------------------- BUREAUCRATS SIGNATURE"
		<< std::endl;
	{
		std::cout << "* signForm grade error *" << std::endl;
		Bureaucrat	a("Suzanne", 10);
		Form		f("Tructruc", 8, 40);
		a.signForm(f);

		std::cout << std::endl;
		std::cout << "* signForm succes *" << std::endl;
		Bureaucrat	b("Raymond", 1);
		b.signForm(f);

		std::cout << std::endl;
		std::cout << "* signForm double signature error *" << std::endl;
		f.beSigned(b.getGrade());
		b.signForm(f);		
	}
	return (0);
}