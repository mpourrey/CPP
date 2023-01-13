/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:35:09 by mpourrey          #+#    #+#             */
/*   Updated: 2023/01/13 20:43:53 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Contact 
{
	private :
	int			index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	
	public :
	void		set_contact(std::string first_name, std::string last_name, std::string nickname) 
	{
		this->index = 0;
		this->first_name = first_name;
		this->last_name = last_name;
		this->nickname = nickname;
		this->phone_number = phone_number;
		this->darkest_secret = darkest_secret;
	
	}
	void		set_index(int index)
	{
		this->index = index;
	}
	int			get_contact_index()
	{
		return(this->index);
	}
	std::string	get_contact_first_name()
	{
		return(this->first_name);
	}
	std::string	get_contact_last_name()
	{
		return(this->last_name);
	}
	std::string	get_contact_nickname()
	{
		return(this->nickname);
	}
	void		print_contact()
	{
		std::cout << this->get_contact_index();
		std::cout << " | ";
		std::cout << this->get_contact_first_name();
		std::cout << " | ";
		std::cout << this->get_contact_last_name();
		std::cout << " | ";
		std::cout << this->get_contact_nickname() << std::endl;

	}
};

class PhoneBook {
	public:
/* 	//constructeur
	PhoneBook(std::string x[8]) : contacts( {} */
	void	add_contact(int index, Contact new_contact)
	{
		new_contact.set_index(index);
		this->contacts[index] = new_contact;
		//modifier l'index du contact
	}
	void	print_phonebook()
	{
		for(int i = 0; i < 8; i++)
		{
			this->contacts[i].print_contact();
		}
	}

	private:
	Contact contacts[8];

};

#endif



