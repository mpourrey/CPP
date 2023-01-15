/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:35:09 by mpourrey          #+#    #+#             */
/*   Updated: 2023/01/15 19:36:24 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <cstring>
# include <cstdlib>

/* UTILS */
void	print_white_spaces(int i);
int		is_valid_index(std::string index);

/* CLASSES */
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
	void		set_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	void		set_index(int index);
	int			get_contact_index();
	std::string	get_contact_first_name();
	std::string	get_contact_last_name();
	std::string	get_contact_nickname();
	std::string	get_contact_phone_number();
	std::string	get_contact_darkest_secret();
	void		print_contact();
	void		print_contact_detail(std::string tmp);
};

class PhoneBook 
{

	private:
	Contact contacts[8];
	
	public:
	void	init_phonebook();
	void	add_contact_to_phonebook(int index, Contact new_contact);
	void	print_list_in_phonebook();
	void	print_contact_in_phonebook(int index);
	int		is_empty_contact(int index);

};

#endif



