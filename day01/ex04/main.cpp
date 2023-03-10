/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:34:00 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/20 16:16:56 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

static int	replace_line(std::ofstream &new_file, std::string line, std::string s1, std::string s2)
{
	std::string		new_line = "";
	size_t			pos;
	
	//find(string a parcourir. premier caractere a parcourir), return emplacement du premier char trouve
	pos = line.find(s1, 0);
	while (pos != std::string::npos) //npos = return par find si ne trouve rien
	{
		//append(nouvelle string a ajouter, position du premier caractere a copier, longueur de la nouvelle string)
		new_line.append(line, 0, pos);
		new_line.append(s2);
		new_file << new_line;
		new_line = "";
		pos += s1.length();	
		line = line.substr(pos);	
		pos = line.find(s1, 0);
	}
	if (line.length() > 0)
		new_file << line;
	return (0);
}

static int	replace_file(std::ifstream &file, std::string filename, std::string s1, std::string s2)
{
	std::string		new_filename;
	std::ofstream	new_file; ////classe utilisee pour ecrire des donnees dans un fichier texte
	std::string		line;
	bool			first_line;

	first_line = 1;
	new_filename = filename + ".replace";
	new_file.open(new_filename.c_str());
	if (!new_file.is_open())
	{
		std::cout << "Can't open " << new_filename << std::endl;
		return (1);
	}
	else
	{
		std::ofstream 	&new_file_ref = new_file;
		while (std::getline(file, line))
		{
			if (!first_line)
				new_file << std::endl;
			else
				first_line = 0;
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
	std::ifstream	file; //classe utilisee pour lire des donnees dans un fichier texte
	std::string 	filename;


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
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		std::ifstream &file_ref = file;
		replace_file(file_ref, filename, s1, s2);
	}
	file.close();
	return (0);
}