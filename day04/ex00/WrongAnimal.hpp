/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:05:21 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/24 01:37:57 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal
{
	protected:
	std::string	_type;
	
	public:
	std::string		getType() const;
	void	makeSound() const;
	
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &src);
	~WrongAnimal();
	
	WrongAnimal	&operator=(const WrongAnimal &src);
};

#endif