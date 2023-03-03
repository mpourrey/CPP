/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:07:37 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 06:02:57 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
/* 	std::cout << std::endl;
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
	} */
	
	Intern a;
	Form *f1;
	Form *f2;
	Form *f3;
	Form *f4;
	try
	{
		f1 = a.makeForm("ShrubberyCreationForm", "garden");
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		f2 = a.makeForm("RobotomyRequestForm", "this guy");
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		f3 = a.makeForm("PresidentialPardonForm", "cat");
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		f4 = a.makeForm("Presi", "oula");
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete f1;
	delete f2;
	delete f3;
	return (0);
}