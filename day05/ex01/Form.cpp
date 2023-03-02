/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 03:10:01 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/02 05:36:06 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
std::string	Form::getName() const
{
	return (_name);
}

bool		Form::getIsSigned() const
{
	return (_isSigned);
}

int			Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int			Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void		Form::beSigned(int bureaucratGrade)
{
	if (bureaucratGrade >= _gradeToSign)
	{
		std::string message = "Error: Grade of bureaucrat too low to sign form";
		throw GradeTooLowException(message);
	}
	else
		_isSigned = 1;
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
Form::Form() : 
	_name("Undefined"), _isSigned(0), _gradeToSign(1), _gradeToExecute(1) {}


/// attribut prive const doit etre set apres ':'
Form::Form(std::string name, const int gradeToSign, const int gradeToExecute) : 
	_name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1)
	{
		std::string message = "Error: Grade to sign form too high.";
		throw GradeTooHighException(message);
	}
	if (gradeToSign > 150)
	{
		std::string message = "Error: Grade to sign form too low.";
		throw  GradeTooLowException(message);
	}
	if (gradeToExecute < 1)
	{
		std::string message = "Error: Grade to execute form too high.";
		throw GradeTooHighException(message);
	}
	if (gradeToExecute > 150)
	{
		std::string message = "Error: Grade to execute form too low.";
		throw  GradeTooLowException(message);
	}
}
	
Form::Form(const Form &src) : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), 
	_gradeToExecute(src._gradeToExecute) {}

Form::~Form() {}

/* ------------------------------------------------------ SURCHARGE OPERATEUR */
Form &Form::operator=(const Form &src)
{
	std::cout << "Warning: Form's name and conditions to be signed or to executed can't be modified."
		<< std::endl;
	_isSigned = src._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
	out << "Form "<< src.getName();
	if (src.getIsSigned() == 1)
		out << " is signed. ";
	else
		out << " is not signed. ";
	out << "It requires grade " << src.getGradeToSign() << " to be signed and grade "
		<< src.getGradeToExecute() << " to be executed." << std::endl;
	return (out); 
}

/* GRADETOOHIGHEXCEPTION ---------------------------------------------------- */
/* --------------------------------------------------------- FCTS SURCHARGEES */
const char *Form::GradeTooHighException::what() const throw()
{
	return (_message.c_str());
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
Form::GradeTooHighException::GradeTooHighException(std::string &message)
{
	_message = message;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

/* GRADETOOLOWEXCEPTION ----------------------------------------------------- */
/* --------------------------------------------------------- FCTS SURCHARGEES */
const char *Form::GradeTooLowException::what() const throw()
{
	return (_message.c_str());
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
Form::GradeTooLowException::GradeTooLowException(std::string &message)
{
	_message = message;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}
