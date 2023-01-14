/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 01:44:28 by mpourrey          #+#    #+#             */
/*   Updated: 2023/01/14 02:06:36 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::init_phonebook()
{
	Contact c0;

	c0.set_contact(" ", " ", " ", " ", " ");
	for (int i = 0; i < 8; i++)
	{
		this->add_contact_to_phonebook(i, c0);
	}
}

void	PhoneBook::add_contact_to_phonebook(int index, Contact new_contact)
{
	new_contact.set_index(index);
	this->contacts[index] = new_contact;
}

void	PhoneBook::print_phonebook()
{
	for(int i = 0; i < 8; i++)
	{
		this->contacts[i].print_contact();
	}
}

void	PhoneBook::print_contact_in_phonebook(int index)
{
	std::string	tmp;
	
	tmp = this->contacts[index].get_contact_first_name();
	std::cout << tmp << std::endl;
	tmp = this->contacts[index].get_contact_last_name();
	std::cout << tmp << std::endl;
	tmp = this->contacts[index].get_contact_nickname();
	std::cout << tmp << std::endl;
	
}