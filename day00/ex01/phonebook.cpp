/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 00:12:48 by mpourrey          #+#    #+#             */
/*   Updated: 2023/01/11 00:13:14 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main ()
{
	Contact contact;
	contact.set_contact(0, "Margot", "Pourrey", "Gomar");
	contact.print_contact();

/* 	PhoneBook my_phonebook;
	my_phonebook.set_contact(0, "Margot");
	std::cout << my_phonebook.get_contact(0) << std::endl; */

}