/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 03:09:59 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 05:14:08 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>

//forward declaration (+ inclure le .hpp dans fichier source)
class	Bureaucrat; 

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
	virtual ~Form();
	Form	&operator=(const Form &src);

	virtual std::string	 	getName() const;
	virtual bool			getIsSigned() const;
	virtual int				getGradeToSign() const;
	virtual int				getGradeToExecute() const;
	virtual void 			beSigned(Bureaucrat bureaucrat) = 0;
	virtual void 			execute(Bureaucrat const &executor) const = 0;
	
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