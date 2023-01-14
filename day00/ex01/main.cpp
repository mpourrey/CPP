/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 00:12:48 by mpourrey          #+#    #+#             */
/*   Updated: 2023/01/14 02:06:56 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main ()
{
	PhoneBook 	phonebook;

	phonebook.init_phonebook();
	
	/* TEST ---------------------------------------------- */
	Contact c1;
	c1.set_contact("Margot", "Pourrey", "Gomar", " ", " ");
	Contact c2;
	c2.set_contact("12345678912", "Zenk", "Sissooooooou", " ", " ");
	phonebook.add_contact_to_phonebook(0, c1);
	phonebook.add_contact_to_phonebook(1, c2);
	/* --------------------------------------------------- */
	phonebook.print_phonebook();
	phonebook.print_contact_in_phonebook(1);
}