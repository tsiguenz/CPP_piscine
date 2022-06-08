/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/08 15:26:14 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "template.h"

int	main() {
	std::cout << "---------- Test swap : ----------" << std::endl;
	{
		int	i = 5;
		int	j = 42;
		std::string	s1 = "Hello";
		std::string	s2 = "World";

		std::cout << "i = " << i << std::endl;
		std::cout << "j = " << j << std::endl;
		swap<int>(i, j);
		std::cout << "i = " << i << std::endl;
		std::cout << "j = " << j << std::endl;
		std::cout << "s1 = " << s1 << std::endl;
		std::cout << "s2 = " << s2 << std::endl;
		swap(s1, s2);
		std::cout << "s1 = " << s1 << std::endl;
		std::cout << "s2 = " << s2 << std::endl;
	}
	std::cout << "---------- Test min : ----------" << std::endl;
	{
		int	i = 5;
		int	j = 42;
		double	x = 5.0f;
		double	y = 5.0f;

		std::cout << min<int>(i, j) << std::endl;
		std::cout << min<float>(x, y) << std::endl;
	}
	std::cout << "---------- Test min : ----------" << std::endl;
	{
		int	i = 5;
		int	j = 42;
		double	x = 5.0f;
		double	y = 5.0f;

		std::cout << max<int>(i, j) << std::endl;
		std::cout << max<float>(x, y) << std::endl;
	}
	return (0);
}
