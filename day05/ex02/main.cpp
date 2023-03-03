/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:07:37 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 03:39:06 by mpourrey         ###   ########.fr       */
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

	std::cout << "* Instanciation success *" << std::endl;
	ShrubberyCreationForm 	f1("garden");
	std::cout << f1 << std::endl;

	RobotomyRequestForm 	f2("Grandma");
	std::cout << f2 << std::endl;

	PresidentialPardonForm	f3("Philippe");
	std::cout << f3 << std::endl;


	std::cout << std::endl;
	std::cout << "------------------------------- FORMS SIGNATURE AND EXECUTION"
		<< std::endl;
	{
		std::cout << "* Execution fail *" << std::endl;
		Bureaucrat	b1("Jean", 1);
		Bureaucrat b2("Louis", 148);
		b2.executeForm(f1);
		b1.signForm(f1);
		b2.executeForm(f1);
		std::cout << std::endl;
		
		std::cout << "* Execution success *" << std::endl;
		b1.executeForm(f1);
		std::cout << std::endl;
		
	}
	{
		std::cout << "* Execution success *" << std::endl;
		Bureaucrat	b1("Jean", 1);
		b1.signForm(f2);
		b1.executeForm(f2);
		std::cout << std::endl;
	}
	{
		std::cout << "* Execution success *" << std::endl;
		Bureaucrat	b1("Jean", 1);
		b1.signForm(f3);
		b1.executeForm(f3);
		std::cout << std::endl;
	}
	
	return (0);
}