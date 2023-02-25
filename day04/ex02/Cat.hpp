/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:18:56 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 06:16:23 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
	Brain *_brain;
	
	public:
	virtual void		makeSound() const;
	virtual void		setBrainIdea(int i, std::string idea);
	virtual std::string	getBrainIdea(int i) const;

	Cat();
	Cat(const Cat &src);
	virtual ~Cat();

	Cat	&operator=(const Cat &src);
};

#endif