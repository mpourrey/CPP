/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:57:00 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 03:48:56 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

/* ------------------------------------------------------------- FCTS MEMBRES */
void	ShrubberyCreationForm::beSigned(Bureaucrat bureaucrat)
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

void 	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	file;
	std::string		filename;
	
	if (_isSigned && executor.getGrade() <= _gradeToExecute)
	{
		filename = _target + "_shruberry";
		file.open(filename.c_str());
		file << "               ,@@@@@@@," << std::endl
             << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
             << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
             << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
             << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
             << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
             << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
             << "       |o|        | |         | |" << std::endl
             << "       |.|        | |         | |" << std::endl
             << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
        file.close();
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

std::string		ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

std::string	ShrubberyCreationForm::getName() const
{
	return (_name);
}

bool		ShrubberyCreationForm::getIsSigned() const
{
	return (_isSigned);
}

int			ShrubberyCreationForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int			ShrubberyCreationForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}


/* ------------------------------------------------------------ CONSTRUCTEURS */
ShrubberyCreationForm::ShrubberyCreationForm() :
	_target("undefined"), _name("ShrubberyCreationForm"), _isSigned(0), 
	_gradeToSign(145), _gradeToExecute(137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	_target(target), _name("ShrubberyCreationForm"), _isSigned(0), 
	_gradeToSign(145), _gradeToExecute(137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : 
	_target(src._target), _name(src._name), _isSigned(src._isSigned), 
	_gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/* ------------------------------------------------------ SURCHARGE OPERATEUR */
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	std::cout << "Warning: Form's name, target and conditions to be signed or executed can't be modified."
		<< std::endl;
	_isSigned = src._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &src)
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