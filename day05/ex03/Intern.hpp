/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:59:04 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 05:40:28 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>

class Form;

class Intern
{
	public:
	Form	*makeForm(std::string formName, std::string formTarget);
	Form	*newShrubberyCreationForm(std::string target);
	Form	*newRobotomyRequestForm(std::string target);
	Form	*newPresidentialPardonForm(std::string target);


	Intern();
	Intern(const Intern &src);
	~Intern();

	Intern &operator=(const Intern &src);

	class FormNameErrorException : public std::exception
	{
		private:
		std::string	_message;
		
		public:
		virtual const char *what() const throw();
		
		FormNameErrorException(std::string &message);
		virtual ~FormNameErrorException() throw();
	};
};

#endif