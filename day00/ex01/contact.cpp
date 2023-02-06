/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:55:17 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/05 18:58:01 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp" 
#include "utils.hpp"

void		Contact::set_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret) 
{
	this->index = 0;
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

void		Contact::set_index(int index)
{
	this->index = index;
}

int			Contact::get_contact_index()
{
	return (this->index);
}

std::string	Contact::get_contact_first_name()
{
	return (this->first_name);
}

std::string	Contact::get_contact_last_name()
{
	return (this->last_name);
}

std::string	Contact::get_contact_nickname()
{
	return (this->nickname);
}

std::string	Contact::get_contact_phone_number()
{
	return (this->phone_number);
}

std::string	Contact::get_contact_darkest_secret()
{
	return (this->darkest_secret);
}


void		Contact::print_contact_detail(std::string tmp)
{
	size_t		len;
	
	len = tmp.length();
	if (len > 10)
	{
		tmp = tmp.substr(0, 9);
		std::cout << tmp << '.';
	}
	else if (len <= 10)
	{
		std::cout << std::setw(10) << tmp;
	}
}

void		Contact::print_contact()
{
	std::string	tmp;
	
	std::cout << std::setw(9) << this->get_contact_index() << '|';
	tmp = this->get_contact_first_name();
	print_contact_detail(tmp);
	std::cout << '|';
	tmp = this->get_contact_last_name();
	print_contact_detail(tmp);
	std::cout << '|';
	tmp = get_contact_nickname();
	print_contact_detail(tmp);
	std::cout << std::endl;
}