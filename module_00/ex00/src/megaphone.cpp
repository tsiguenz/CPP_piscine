/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:55:39 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/11 11:04:37 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string	str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		str = av[i];
		for (size_t y = 0; y < str.size(); y++)
			str.at(y) = std::toupper(str.at(y));
		std::cout << str;
		if (i != ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
