#include <iostream>
#include <string>

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Contact 
{
	public :
	void		set_contact(int index, std::string first_name, std::string last_name, std::string nickname) 
	{
		this->index = index;
		this->first_name = first_name;
		this->last_name = last_name;
		this->nickname = nickname;
	}
	int	get_contact_index()
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
	private :
	int			index;
	std::string first_name;
	std::string last_name;
	std::string nickname;

};

class PhoneBook {
	public:
/* 	//constructeur
	PhoneBook(std::string x[8]) : contacts( {} */

	//methode
//	void		set_contact(int i, std::string x) { contacts[i].name = x; }
//	std::string	get_contact(int i) const { return contacts[i].name; }
	
	private:
	//attributs
	Contact contacts[8];

};

#endif



