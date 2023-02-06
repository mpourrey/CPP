/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:11:59 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/05 18:58:07 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iomanip>

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

#endif