/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:19:58 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 06:16:40 by mpourrey         ###   ########.fr       */
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
	virtual void		makeSound() const;
	virtual void		setBrainIdea(int i, std::string idea);
	virtual std::string	getBrainIdea(int i) const;
	
	Dog();
	Dog(const Dog &src);
	virtual ~Dog();

	Dog	&operator=(const Dog &src);

};

#endif