/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:12:41 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 03:38:37 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
std::string		Bureaucrat::getName() const
{
	return (_name);
}

int				Bureaucrat::getGrade() const
{
	return (_grade);
}

void			Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
	{
		std::string message = "Error: Grade too high.";
		throw GradeTooHighException(message);
	}
	if (grade > 150)
	{
		std::string message = "Error: Grade too low.";
		throw  GradeTooLowException(message);
	}
	_grade = grade;
}

void			Bureaucrat::upGrade()
{	
	if (_grade - 1 < 1)
	{
		std::string message = "Error: Grade too high.";
		throw GradeTooHighException(message);
	}
	_grade--;
}

void			Bureaucrat::downGrade()
{
	if (_grade + 1 > 150)
	{
		std::string message = "Error: Grade too low.";
		throw  GradeTooLowException(message);
	}
	_grade++;
}

void			Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void			Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
Bureaucrat::Bureaucrat() : _name("Anonymous"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : 
	_name(src._name), _grade(src._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Warning: Bureaucrat's name can't be modified." << std::endl;
	_grade = src._grade;
	return (*this);
}

/* ------------------------------------------------------ SURCHARGE OPERATEUR */
std::ostream &operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return (out); 
}

/* GRADETOOHIGHEXCEPTION ---------------------------------------------------- */
/* --------------------------------------------------------- FCTS SURCHARGEES */
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return (_message.c_str());
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
Bureaucrat::GradeTooHighException::GradeTooHighException(std::string &message)
{
	_message = message;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

/* GRADETOOLOWEXCEPTION ----------------------------------------------------- */
/* --------------------------------------------------------- FCTS SURCHARGEES */
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (_message.c_str());
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
Bureaucrat::GradeTooLowException::GradeTooLowException(std::string &message)
{
	_message = message;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

