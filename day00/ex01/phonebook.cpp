/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 00:12:48 by mpourrey          #+#    #+#             */
/*   Updated: 2023/01/13 20:13:55 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main ()
{
	Contact c0;
	c0.set_contact("Margot", "Pourrey", "Gomar");
	Contact c1;
	c1.set_contact("Sirine", "Zenk", "Sissou");
//	c1.print_contact();

	PhoneBook phonebook;
	phonebook.add_contact(0, c0);
	phonebook.add_contact(1, c1);

	phonebook.print_phonebook();

}