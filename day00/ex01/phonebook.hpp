/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:35:09 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/05 15:22:30 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <cstring>
# include <cstdlib>
# include "contact.hpp"

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



