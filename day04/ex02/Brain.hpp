/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 04:58:58 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/25 03:23:19 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain
{
	private:

	std::string	_ideas[100];
	
	public:
	void		setIdea(int i, std::string idea);
	std::string	getIdea(int i) const;

	
	Brain();
	Brain(const Brain &src);
	virtual ~Brain();
	
	Brain	&operator=(const Brain &src);
};

#endif