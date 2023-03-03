/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:27:30 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 03:36:01 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

class	Bureaucrat;
# include "Form.hpp"
# include <fstream>

class PresidentialPardonForm : public Form
{
	private:
	const std::string	_target;
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	
	public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &src);

	virtual std::string	 	getName() const;
	virtual bool			getIsSigned() const;
	virtual int				getGradeToSign() const;
	virtual int				getGradeToExecute() const;
	virtual void 			beSigned(Bureaucrat bureaucrat);
	virtual void 			execute(Bureaucrat const &executor) const;
	std::string				getTarget() const;
	
};

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &src);

#endif