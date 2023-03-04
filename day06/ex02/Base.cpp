/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 07:21:15 by mpourrey          #+#    #+#             */
/*   Updated: 2023/03/04 08:12:57 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*Base::generate(void)
{
	int		i;
	Base	*ptr;
	
	std::srand(std::time(0)); //init d'une graine de randomisation dans std
	i = std::rand() % 3; //utilise la graine
	
	switch (i)
	{
		case 0 :
		{
			ptr = new A;
			std::cout << "New A generated." << std::endl;
			break;
		}
		case 1 :
		{
			ptr = new B;
			std::cout << "New B generated." << std::endl;
			break;
		}
		case 2 :
		{
			ptr = new C;
			std::cout << "New C generated." << std::endl;
			break;
		}
	}
	return (ptr);
}

void	Base::identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Base is type A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Base is type B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Base is type C." << std::endl;
}

void	Base::identify(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "Base is type A." << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "Base is type B." << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "Base is type C." << std::endl;
}



Base::~Base() {}