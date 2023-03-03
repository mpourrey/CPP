/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:07:40 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 04:02:06 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

class Bureaucrat
{
	private :
	const std::string	_name;
	int					_grade;

	public :
	std::string		getName() const;
	int				getGrade() const;
	void			setGrade(int grade);
	void			upGrade();
	void			downGrade();
	void			signForm(Form &form) const;
	void			executeForm(Form const &form);
	
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &src);

	class GradeTooHighException : public std::exception
	{
		private:
		std::string	_message;
		
		public:
		virtual const char *what() const throw();
		
		GradeTooHighException(std::string &message);
		virtual ~GradeTooHighException() throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		private:
		std::string	_message;
		
		public:
		virtual const char *what() const throw();
		
		GradeTooLowException(std::string &message);
		virtual ~GradeTooLowException() throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);

#endif