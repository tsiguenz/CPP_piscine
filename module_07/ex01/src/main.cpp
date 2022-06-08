/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/08 18:26:23 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "template.h"

void	addOne(int& i) {
	i++;
}

void	appendTest(std::string& str) {
	str.append("_test");
}

int	main() {
	std::cout << "---------- Test int and addone : ----------" << std::endl;
	{
		int	tab[5] = {1, 2, 3, 4, 5};

		for (int i = 0; i < 5; i++)
			std::cout << tab[i];
		std::cout << std::endl;
		iter(tab, 5, addOne);
		for (int i = 0; i < 5; i++)
			std::cout << tab[i];
		std::cout << std::endl;
	}
	std::cout << "---------- Test string and appendTest : ----------" << std::endl;
	{
		std::string	tab[4] = {"toto", "titi", "tata", "tutu"};

		for (int i = 0; i < 4; i++)
			std::cout << tab[i] << std::endl;
		iter(tab, 4, appendTest);
		for (int i = 0; i < 4; i++)
			std::cout << tab[i] << std::endl;
	}
	std::cout << "---------- Test string and setToZero : ----------" << std::endl;
	{
		double	tab[4] = {1.0, 2.0, 3.0, 4.0};

		for (int i = 0; i < 4; i++)
			std::cout << tab[i];
		std::cout << std::endl;
		iter(tab, 4, setToZero<double>);
		for (int i = 0; i < 4; i++)
			std::cout << tab[i];
		std::cout << std::endl;
	}
	return 0;
}
