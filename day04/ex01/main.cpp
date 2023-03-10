/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:07:50 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 06:26:42 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	{
		std::cout << std::endl;
		std::cout << "------------------------------------------- TABLEAU DE PTR SUR OBJETS"
			<< std::endl;
			
		int		nb = 4;
		Animal	*tab[nb];
	
		std::cout << "------------------------------------ allocation des objets du tableau"
			<< std::endl;
		for (int i = 0; i < nb / 2; i++)
			tab[i] = new Dog();
		for (int i = nb / 2; i < nb; i++)
			tab[i] = new Cat();
		std::cout << "------------------------------------------------------------- tableau"
			<< std::endl;
 		for (int i = 0; i < nb; i++)
			std::cout << "tab[" << i << "] = " << tab[i]->getType() << std::endl;	
		std::cout << "----------------------------------------------------------- set idees"
			<< std::endl;
		tab[0]->setBrainIdea(0, "CPP is nice");
		std::cout << "Ginette idea is : " << tab[0]->getBrainIdea(0) << std::endl;
		std::cout << "----------------------------------- suppression des objets du tableau"
			<< std::endl;	
		for (int i = 0; i < nb; i++)
			delete(tab[i]);
	}
	{
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------- COPIE AVEC ="
		<< std::endl;
		
		std::cout << "------------------------------------------------------- constructeurs"
			<< std::endl;
		Dog a;
		Dog b;
		std::cout << "--------------------------------------------------------------- copie"
			<< std::endl;
		b = a;
		std::cout << "---------------------------------------------------------- test idees"
			<< std::endl;
		a.setBrainIdea(0, "I'm happy");
		b.setBrainIdea(0, "Robert is happy");
		std::cout << "Robert idea is : " << a.getBrainIdea(0) << std::endl;
		std::cout << "Julie idea is : " << b.getBrainIdea(0) << std::endl;
		std::cout << "-------------------------------------------------------- destructeurs"
			<< std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << "--------------------------------------------- COPIE AVEC CONSTRUCTEUR"
		<< std::endl;
	
		std::cout << "-------------------------------------------------------- constructeur"
			<< std::endl;
		Cat a;
		Cat &ref_a = a;
		std::cout << "--------------------------------------------------------------- copie"
			<< std::endl;
		Cat b(ref_a);
		std::cout << "---------------------------------------------------------- test idees"
			<< std::endl;
		a.setBrainIdea(5, "I love Jose");
		b.setBrainIdea(6, "I love spaghettis");
		std::cout << "Marc idea is : " << a.getBrainIdea(5) << std::endl;
		std::cout << "Jose idea is : " << b.getBrainIdea(6) << std::endl;
		std::cout << "Jose idea is : " << b.getBrainIdea(5) << std::endl;	
		std::cout << "-------------------------------------------------------- destructeurs"
			<< std::endl;
	}	
	return 0;
}