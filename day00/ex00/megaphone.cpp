/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourrey <mpourrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:30:49 by mpourrey          #+#    #+#             */
/*   Updated: 2023/02/06 17:07:29 by mpourrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

void	print_upper_args(int argc, char **argv)
{
	size_t	len;
	char	upper_c;

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			upper_c = std::toupper(argv[i][j]);
			std::cout << upper_c;
		}
	}
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		print_upper_args(argc, argv);
	return (0);

}