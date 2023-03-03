/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:46:55 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 05:13:59 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
void	PresidentialPardonForm::beSigned(Bureaucrat bureaucrat)
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

void 	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	file;
	std::string		filename;
	
	if (_isSigned && executor.getGrade() <= _gradeToExecute)
	{
		std::cout << _target << " was forgiven by Zaphod Beeblebrox" << std::endl;
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

std::string		PresidentialPardonForm::getTarget() const
{
	return (_target);
}

std::string	PresidentialPardonForm::getName() const
{
	return (_name);
}

bool		PresidentialPardonForm::getIsSigned() const
{
	return (_isSigned);
}

int			PresidentialPardonForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int			PresidentialPardonForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}


/* ------------------------------------------------------------ CONSTRUCTEURS */
PresidentialPardonForm::PresidentialPardonForm() :
	_target("undefined"), _name("PresidentialPardonForm"), _isSigned(0), 
	_gradeToSign(25), _gradeToExecute(5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	_target(target), _name("PresidentialPardonForm"), _isSigned(0), 
	_gradeToSign(25), _gradeToExecute(5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : 
	_target(src._target), _name(src._name), _isSigned(src._isSigned), 
	_gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

/* ------------------------------------------------------ SURCHARGE OPERATEUR */
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	std::cout << "Warning: Form's name, target and conditions to be signed or executed can't be modified."
		<< std::endl;
	_isSigned = src._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &src)
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