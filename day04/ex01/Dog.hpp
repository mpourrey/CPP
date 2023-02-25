/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:19:58 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 03:22:48 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	private:
	Brain *_brain;

	public:
	void		makeSound() const;
	void		setBrainIdea(int i, std::string idea);
	std::string	getBrainIdea(int i) const;
	
	Dog();
	Dog(const Dog &src);
	virtual ~Dog();

	Dog	&operator=(const Dog &src);

};

#endif