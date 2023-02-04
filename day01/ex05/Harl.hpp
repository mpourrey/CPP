/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:18:33 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/04 14:26:42 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

class Harl
{
	private :
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);	

	public :
	void	complain(std::string level);
	Harl();
	~Harl();
};

#endif