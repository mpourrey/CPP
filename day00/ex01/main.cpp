/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 00:12:48 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/05 19:02:05 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include "utils.hpp"

PhoneBook	handle_add_command(int index, PhoneBook phonebook)
{
	Contact		new_contact;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "                                 "
				<< "Please enter the contact details..." 
				<< std::endl
				<< "first name : ";
	if (!std::getline(std::cin, first_name))
		exit(1);
	std::cout << "last name : ";
	if (!std::getline(std::cin, last_name))
		exit(1);
	std::cout << "nickname : ";
	if (!std::getline(std::cin, nickname))
		exit(1);
	std::cout << "phone number : ";
	if (!std::getline(std::cin, phone_number))
		exit(1);
	std::cout << "darkest secret : ";
	if (!std::getline(std::cin, darkest_secret))
		exit(1);
	new_contact.set_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	phonebook.add_contact_to_phonebook(index, new_contact);
	std::cout << "                                 "
				<< "Contact added !" << std::endl;
	return (phonebook);

}

void	handle_search_command(PhoneBook phonebook)
{
	std::string	index;
	const char *cindex;
	int 		i;
	
	phonebook.print_list_in_phonebook();
	std::cout << "                                 "
				<< "Please enter an index..." 
				<< std::endl;
	if (!std::getline(std::cin, index))
		exit(1);
 	while (!is_valid_index(index))
	{
		
		std::cout << "                                 "
					<< "Please enter a valid index..." << std::endl;
		std::cout << "index : ";
		std::cin.ignore(index.length(), '\n');
		if (!std::getline(std::cin, index))
			exit(1);
	}
	cindex = index.c_str();
	i = std::atoi(cindex);

	if (phonebook.is_empty_contact(i))
		std::cout << "                                 "
					<< "Contact " << index << " empty !" << std::endl;
	else
	{
		phonebook.print_contact_in_phonebook(i);
		std::cout << "                                 "
					<< "Contact " << index << " found !" << std::endl;
	}
}

int	main ()
{
	PhoneBook 	phonebook;
	std::string	line;
	int			index;
	
	phonebook.init_phonebook();
	index = 0;
	while (1)
	{
		std::cout << "                                 "
					<< "Please enter a command..." << std::endl;
		if (!std::getline(std::cin, line))
			return(1);
		if (strcmp(line.c_str(), "ADD") == 0)
		{
			phonebook = handle_add_command(index, phonebook);
			index++;
			if (index > 7)
				index = 0;
		}
		else if (strcmp(line.c_str(), "SEARCH") == 0)
		{
			handle_search_command(phonebook);
		}
		else if (strcmp(line.c_str(), "EXIT") == 0)
			return (0);
		else
		std::cout << "                                 "
					<< "Try again !" << std::endl;	
	}
}