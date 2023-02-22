/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createZombie.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:13:19 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/20 14:26:02 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATEZOMBIE_HPP
# define CREATEZOMBIE_HPP

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif