/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 06:29:27 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/04 06:57:17 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream> 

class Data
{
	private:
	int	_i;
	int	_j;
	
	public:
	Data();
	Data(const Data &src);
	~Data();

	void	displayData();
	
	Data &operator=(const Data &src);
};

#endif