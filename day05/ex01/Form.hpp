/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 03:09:59 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/02 05:31:54 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Form
{
	private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

	public:
	Form();
	Form(std::string name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &src);
	~Form();
	Form	&operator=(const Form &src);

	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	void		beSigned(int bureaucratGrade);
	
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

std::ostream &operator<<(std::ostream &out, const Form &src);


#endif