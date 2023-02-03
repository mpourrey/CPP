/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:34:00 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/03 17:35:49 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

static int	replace_line(std::ofstream &new_file, std::string line, std::string s1, std::string s2)
{
	std::string		new_line;
	size_t			pos;
	
	pos = line.find(s1, 0);
	while (pos != std::string::npos) //on a trouve s1
	{
		std::cout << "line = " << line << std::endl;
		//append(string a ajouter, position du premier caractere a copier, longueur de la nouvelle string)
		new_line.append(line, 0, pos);
		new_line.append(s2);
		pos += s1.length();

		new_file << new_line;
		line = line.substr(pos);
		
		pos = line.find(s1, 0);
		std::cout << "pos = " << pos << std::endl ;

	}
	return (0);
}

static int	replace_file(std::ifstream &file, std::string filename, std::string s1, std::string s2)
{
	std::string		new_filename;
	std::ofstream	new_file;
	std::string		line;

	new_filename = filename + ".replace";
	new_file.open(new_filename.c_str());
	if (!file.is_open())
	{
		std::cout << "Can't open " << new_filename << std::endl;
		return (1);
	}
	else
	{
		while (std::getline(file, line))
		{
			std::ofstream 	&new_file_ref = new_file;
			replace_line(new_file_ref, line, s1, s2);
		}
	}
	new_file.close();
	return (0);
}

int	main(int argc, char **argv)
{
	std::string		s1;
	std::string		s2;
	std::ifstream	file;

	if (argc != 4)
	{
		std::cout << "Please enter three arguments" << std::endl;
		return (1);
	}
	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Can't open " << argv[1] << std::endl;
		return (1);
	}
	else
	{
		std::ifstream &file_ref = file;
		std::string filename(argv[1]);
		std::string s1(argv[2]);
		std::string s2(argv[3]);
		replace_file(file_ref, filename, s1, s2);
	}
	file.close();
	return (0);
}