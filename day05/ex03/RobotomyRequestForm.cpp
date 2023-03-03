/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:46:44 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 03:23:33 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
void	RobotomyRequestForm::beSigned(Bureaucrat bureaucrat)
{
	if (!_isSigned && bureaucrat.getGrade() <= _gradeToSign)
	{
		std::cout << bureaucrat.getName() << " signed form " << _name << "."
			<< std::endl;
		_isSigned = 1;
	}
	else if (_isSigned)
	{
		std::string	message = bureaucrat.getName() + " couldn't sign form "
			+ _name + " because the form is already signed.";
		throw GradeTooLowException(message);
	}
	else
	{
		std::string message = bureaucrat.getName() + " couldn't sign form "
			+ _name +  " because his grade is too low.";
		throw GradeTooLowException(message);
	}
}

void 	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	file;
	std::string		filename;
	
	if (_isSigned && executor.getGrade() <= _gradeToExecute)
	{
		std::cout << "*tatatata !*" << std::endl;
		std::cout << executor.getName() << " executed form " << _name << "."
			<< std::endl;
	}
	else if (!_isSigned)
	{
		std::string	message = executor.getName() + " couldn't execute form "
			+ _name + " because the form is not signed yet.";
		throw GradeTooLowException(message);
	}
	else
	{
		std::string message = executor.getName() + " couldn't execute form "
			+ _name +  " because his grade is too low.";
		throw GradeTooLowException(message);
	}
}

std::string		RobotomyRequestForm::getTarget() const
{
	return (_target);
}

std::string	RobotomyRequestForm::getName() const
{
	return (_name);
}

bool		RobotomyRequestForm::getIsSigned() const
{
	return (_isSigned);
}

int			RobotomyRequestForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int			RobotomyRequestForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}


/* ------------------------------------------------------------ CONSTRUCTEURS */
RobotomyRequestForm::RobotomyRequestForm() :
	_target("undefined"), _name("RobotomyRequestForm"), _isSigned(0), 
	_gradeToSign(72), _gradeToExecute(45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	_target(target), _name("RobotomyRequestForm"), _isSigned(0), 
	_gradeToSign(72), _gradeToExecute(45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : 
	_target(src._target), _name(src._name), _isSigned(src._isSigned), 
	_gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

/* ------------------------------------------------------ SURCHARGE OPERATEUR */
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	std::cout << "Warning: Form's name, target and conditions to be signed or executed can't be modified."
		<< std::endl;
	_isSigned = src._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &src)
{
	out << "Form "<< src.getName();
	if (src.getIsSigned() == 1)
		out << " is signed. ";
	else
		out << " is not signed. ";
	out << "It requires grade " << src.getGradeToSign() << " to be signed and grade "
		<< src.getGradeToExecute() << " to be executed.";
	return (out); 
}