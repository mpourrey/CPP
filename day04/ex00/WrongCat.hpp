/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 01:39:31 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/24 01:39:43 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
	void		makeSound() const;
	
	WrongCat();
	WrongCat(const WrongCat &src);
	~WrongCat();

};

#endif