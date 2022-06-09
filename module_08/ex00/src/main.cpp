/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/09 16:43:07 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include "easyfind.h"

int	main() {
	std::cout << "---------- Vector test : ----------" << std::endl;
	{
		std::vector<int>	v;

		for (int i = 0; i < 10; i++) {
			v.push_back(i * 10) ;
		}
		for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++) {
			std::cout << *it << std::endl;
		}
		std::cout << "easyFind(20) = " << *easyFind(v, 20) << std::endl;
	}
	std::cout << "---------- List test : ----------" << std::endl;
	{
		std::list<int>	v;

		for (int i = 0; i < 10; i++) {
			v.push_back(i * 10) ;
		}
		for (std::list<int>::iterator it = v.begin(); it != v.end(); it++) {
			std::cout << *it << std::endl;
		}
		std::cout << "easyFind(50) = " << *easyFind(v, 50) << std::endl;
	}
	return (0);
}
