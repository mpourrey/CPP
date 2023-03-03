/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:18:32 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/03 03:20:30 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

class	Bureaucrat;
# include "Form.hpp"
# include <fstream>

class RobotomyRequestForm : public Form
{
	private:
	const std::string	_target;
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	
	public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &src);

	virtual std::string	 	getName() const;
	virtual bool			getIsSigned() const;
	virtual int				getGradeToSign() const;
	virtual int				getGradeToExecute() const;
	virtual void 			beSigned(Bureaucrat bureaucrat);
	virtual void 			execute(Bureaucrat const &executor) const;
	std::string				getTarget() const;
	
};

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &src);

#endif