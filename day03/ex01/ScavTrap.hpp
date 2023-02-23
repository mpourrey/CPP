/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 03:01:50 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/23 05:13:37 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	
	void	guardGate();
	void	attack(const std::string &target);

	ScavTrap();
 	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap();
};

#endif
