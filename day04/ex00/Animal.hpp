/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:08:48 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/24 01:55:32 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	protected:
	std::string	_type;
	
	public:
	std::string		getType() const;
	virtual void	makeSound() const;
	
	Animal();
	Animal(std::string type);
	Animal(const Animal &src);
	virtual ~Animal();
	
	Animal	&operator=(const Animal &src);
};

#endif