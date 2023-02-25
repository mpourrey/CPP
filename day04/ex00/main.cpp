/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:07:50 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/24 03:50:17 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "-------------------------------------------- ANIMAL TESTS"
			<< std::endl;
		const Animal	*undefined = new Animal();
		const Animal	*animal_dog = new Dog();
		const Animal	*animal_cat = new Cat();
	
		std::cout << std::endl;
		std::cout << "animal_undefined type is : " << undefined->getType() 
			<< " and it makes : ";
		undefined->makeSound();
		std::cout << "animal_dog type is : " << animal_dog->getType() 
			<< " and it makes : ";
		animal_dog->makeSound();
		std::cout << "animal_cat type is : " << animal_cat->getType()
			<< " and it makes : ";
		animal_cat->makeSound();
		std::cout << std::endl;
		delete(undefined);
		delete(animal_dog);
		delete(animal_cat);
		std::cout << std::endl;
	}
	{
		std::cout << "--------------------------------------- WRONGANIMAL TESTS"
			<< std::endl;
			
		const WrongAnimal	*animal_cat = new WrongCat();
		const WrongCat		cat;

		std::cout << std::endl;
		std::cout << "animal_cat makes : ";
			animal_cat->makeSound();
		std::cout << "cat makes : ";
			cat.makeSound();
		std::cout << std::endl;
		delete(animal_cat);
		std::cout << std::endl;
	}
	return 0;
}