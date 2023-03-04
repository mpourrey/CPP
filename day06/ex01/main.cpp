/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 06:18:15 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/04 06:58:37 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"

Data		*deserialize(uintptr_t raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	raw;
	
	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

int	main()
{
	Data 		*d = new Data;
	Data		*e = NULL;
	uintptr_t	raw;
	

	std::cout << "Adresse de Data d : " << d << std::endl;
	raw = serialize(d);
	std::cout << "Adresse de Data d sous forme de uintptr_t : " << raw 
		<< std::endl;
	std::cout << "Adresse de Data e : " << e << std::endl;	
	e = deserialize(raw);
	std::cout << "Adresse de Data e apres deserialisation : " << e << std::endl;
	e->displayData();
	
	delete d;
	return (0);
}