/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:59:06 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 06:05:39 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

#include "Intern.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
Form	*Intern::makeForm(std::string formName, std::string formTarget)
{
	Form			*(Intern::*functions[3])(std::string);
	std::string		formNames[3];
	
	functions[0] = &Intern::newShrubberyCreationForm;
	functions[1] = &Intern::newRobotomyRequestForm;
	functions[2] = &Intern::newPresidentialPardonForm;
	
 	formNames[0] = "ShrubberyCreationForm";
	formNames[1] = "RobotomyRequestForm";
	formNames[2] = "PresidentialPardonForm";

	for (int i= 0; i < 3; i++)
	{
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " << formName << "." << std::endl;
			return (this->*functions[0])(formTarget);
		}
	}
	std::string	message = "Error :" + formName + " form doesn't exist.";
	throw FormNameErrorException(message);
}

Form	*Intern::newShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::newRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::newPresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}


/* ------------------------------------------------------------ CONSTRUCTEURS */
Intern::Intern() {}

Intern::Intern(const Intern &src) 
{
	*this = src;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &src)
{
	std::cout << "Warning: Intern has no attributes to copy." << std::endl;
	(void)src;
	return (*this);
}

/* ---------------------------------------------------------------- EXCEPTION */
/* --------------------------------------------------------- FCTS SURCHARGEES */
const char *Intern::FormNameErrorException::FormNameErrorException::what() const throw()
{
	return (_message.c_str());
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
Intern::FormNameErrorException::FormNameErrorException(std::string &message)
{
	_message = message;
}

Intern::FormNameErrorException::~FormNameErrorException() throw() {}