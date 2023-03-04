/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 01:07:24 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/04 04:51:08 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Litteral.hpp"

/* --------------------------------------------------------------- EXCEPTIONS */
const char *Litteral::UndefinedTypeException::what() const throw()
{
	return (_message.c_str());
	
}

Litteral::UndefinedTypeException::UndefinedTypeException(std::string &message)
{
	_message = message;
}

Litteral::UndefinedTypeException::~UndefinedTypeException() throw() {}



const char *Litteral::OverflowException::what() const throw()
{
	return (_message.c_str());
	
}

Litteral::OverflowException::OverflowException(std::string &message)
{
	_message = message;
}

Litteral::OverflowException::~OverflowException() throw() {}


