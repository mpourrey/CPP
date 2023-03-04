/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Litteral.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:45:13 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/04 06:15:05 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Litteral.hpp"

bool		isSpecialFloat(std::string _value)
{
	if (_value == "nanf" || _value == "+inff" || _value == "-inff")
		return (1);
	return (0);
}

bool		isSpecialDouble(std::string _value)
{
	if (_value == "nan" || _value == "+inf" || _value == "-inf")
		return (1);
	return (0);
}

/* --------------------------------------------------------------- ACCESSEURS */
void		Litteral::displayValues() const
{
	long double	tmp = static_cast<long double>(std::atof(_value.c_str()));
	if (_value[0] == '-')
		tmp = - tmp;

	switch (_type)
	{
		case CHAR :
		{
			std::cout << "char : " << _cvalue << std::endl;
			std::cout << "int : " << static_cast<int>(_cvalue) << std::endl;
			std::cout << "float : " << static_cast<float>(_cvalue) << "f" << std::endl;
			std::cout << "double : " << static_cast<double>(_cvalue) << std::endl;			
			break;
		}
		case INT :
		{
			if (_ivalue < 20 || _ivalue > 127)
				std::cout << "char : non displayable" << std::endl;
			else
				std::cout << "char : " << static_cast<char>(_ivalue) << std::endl;
			std::cout << "int : " << _ivalue << std::endl;
			std::cout << "float : " << std::fixed << std::setprecision(1) 
				<< static_cast<float>(_ivalue) << "f" << std::endl;
			std::cout << "double : " << std::fixed << std::setprecision(1) 
				<< static_cast<double>(_ivalue) << std::endl;	
			break;
		}
		case FLOAT :
		{
			if (_fvalue < 20.0 || _fvalue > 127.0)
				std::cout << "char : non displayable" << std::endl;
			else if (isSpecialFloat(_value))
				std::cout << "char : impossible" << std::endl;
			else
				std::cout << "char : " << static_cast<char>(_fvalue) << std::endl;		
			if (isSpecialFloat(_value))
				std::cout << "int : impossible" << std::endl;
			else
			{
				if (tmp > INT_MAX || tmp < INT_MIN)
					std::cout << "int : overflow" << std::endl;
				else
					std::cout << "int : " << static_cast<int>(_fvalue) << std::endl;					
			}
			std::cout << "float : " << std::fixed << std::setprecision(1) 
				<< _fvalue << "f" << std::endl;
			std::cout << "double : " << std::fixed << std::setprecision(1)
				<< static_cast<double>(_fvalue) << std::endl;			
			break;
		}
		case DOUBLE :
		{
			if (_dvalue < 20.0 || _dvalue > 127.0)
				std::cout << "char : non displayable" << std::endl;
			else if (isSpecialDouble(_value))
				std::cout << "char : impossible" << std::endl;
			else
				std::cout << "char : " << static_cast<char>(_dvalue) << std::endl;				
			if (isSpecialDouble(_value))
				std::cout << "int : impossible" << std::endl;
			else
			{
				if (tmp > INT_MAX || tmp < INT_MIN)
					std::cout << "int : overflow" << std::endl;
				else
					std::cout << "int : " << static_cast<int>(_dvalue) << std::endl;					
			}
			
			if (tmp > FLT_MAX || tmp < FLT_MIN)	
					std::cout << "float : overflow" << std::endl;
			else
			{
				std::cout << "float : " << std::fixed << std::setprecision(1) 
					<< _dvalue << "f" << std::endl;
			}
			std::cout << "double : " << std::fixed << std::setprecision(1)
				<< static_cast<double>(_dvalue) << std::endl;			
			break;
		}
	}
}

void		Litteral::computeTypedValue()
{
	long double	tmp = static_cast<long double>(std::atof(_value.c_str()));
	if (_value[0] == '-')
		tmp = - tmp;
	std::string	 message = "Value overflow in her own type.";

 	switch (_type)
	{
		case CHAR :
		{
			_cvalue = _value[0];
			break;
		}
		case INT :
		{
			if (tmp > INT_MAX || tmp < INT_MIN)
				throw OverflowException(message);
			_ivalue = std::atoi(_value.c_str());
			break;
		}
		case FLOAT :
		{
			if ((tmp > FLT_MAX || tmp < FLT_MIN) && tmp != 0 
				&& !(isSpecialFloat(_value)))
				throw OverflowException(message);
			_fvalue = std::atof(_value.c_str());
			break;
		}
		case DOUBLE :
		{
			if ((tmp > DBL_MAX || tmp < DBL_MIN) && tmp != 0
				&& (!isSpecialDouble(_value)))
				throw OverflowException(message);
			_dvalue = static_cast<double>(std::atof(_value.c_str()));
			break;
		}
	}		
}

void	Litteral::parseType()
{
	unsigned int pos;
	std::string	 message = "No type corresponding to value.";
	
	if (_type == UNDEFINED)
		throw UndefinedTypeException(message);
	if (_value.length() == 1 && !isdigit(_value[0]))
	{
		_type = CHAR;
	}
	else if (_value.find('.') != std::string::npos)
	{
		pos = _value.find('.');
		if (!isdigit(_value[pos + 1]))
			throw UndefinedTypeException(message);	
		if (!isdigit(_value[0]) && _value[0] != '-')
			throw UndefinedTypeException(message);	
		for(unsigned int i = 1; _value[i]; i++)
		{
			if (!isdigit(_value[i]))
			{
				if((i != pos) && (i != _value.length() - 1 || (_value[i] != 'f')))
					throw UndefinedTypeException(message);
			}
		}
		if (_value[_value.length() - 1] == 'f')
			_type = FLOAT;
		else
			_type = DOUBLE;		
	}
	else if (isdigit(_value[0]) || (_value[0] == '-' && isdigit(_value[1])))
	{
		for(unsigned int i = 1; _value[i]; i++)
		{
			if (!isdigit(_value[i]))
				throw UndefinedTypeException(message);
		}
		_type = INT;
	}
	else
	{
		if (_value == "-inff" || _value == "+inff" || _value == "nanf")
			_type = FLOAT;
		else if (_value == "-inf" || _value == "+inf" || _value == "nan")
			_type = DOUBLE;
		else
			throw UndefinedTypeException(message);
	}
}

std::string	Litteral::getValue() const
{
	return (_value);
}

int			Litteral::getType() const
{
	return (_type);
}

/* ------------------------------------------------------------ CONSTRUCTEURS */
Litteral::Litteral() : _value("undefined"), _type(UNDEFINED) {}

Litteral::Litteral(char *value) : _value(value) {}

Litteral::Litteral(const Litteral &src)
{
	*this = src;
}

Litteral::~Litteral() {}

/* ---------------------------------------------------- SURCHARGES OPERATEURS */
Litteral		&Litteral::operator=(const Litteral &src)
{
	_value = src._value;
	return (*this);
}
