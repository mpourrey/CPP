/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Litteral.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:44:07 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/04 06:15:17 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITTERAL_HPP
# define LITTERAL_HPP

# include <string>
# include <iostream>
# include <cctype>
# include <cstdlib>
# include <climits>
# include <cfloat>
# include <iomanip>

enum Types
{
	UNDEFINED = -1,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
};

class Litteral
{
	private:
		std::string	_value;
		int			_type;
		char		_cvalue;
		int			_ivalue;
		float		_fvalue;
		double		_dvalue;
		
	public:
		std::string	getValue() const;
		int			getType() const;
		void		parseType();
		void		computeTypedValue();
		void		displayValues() const;


		Litteral();
		Litteral(char *type);
		Litteral(const Litteral &src);
		~Litteral();
		Litteral	&operator=(const Litteral &src);

	class UndefinedTypeException : public std::exception
	{
		private:
		std::string	_message;
		
		public:
		virtual const char *what() const throw();
		
		UndefinedTypeException(std::string &message);
		virtual ~UndefinedTypeException() throw();
	};

	class OverflowException : public std::exception
	{
		private:
		std::string	_message;
		
		public:
		virtual const char *what() const throw();
		
		OverflowException(std::string &message);
		virtual ~OverflowException() throw();
	};
};

#endif