/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:18:20 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 02:21:58 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURBBERYCREATIONFORM_HPP
# define SHURBBERYCREATIONFORM_HPP

class	Bureaucrat;
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
	const std::string	_target;
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	
	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src);

	virtual std::string	 	getName() const;
	virtual bool			getIsSigned() const;
	virtual int				getGradeToSign() const;
	virtual int				getGradeToExecute() const;
	virtual void 			beSigned(Bureaucrat bureaucrat);
	virtual void 			execute(Bureaucrat const &executor) const;
	std::string				getTarget() const;
	
};

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &src);

#endif
