/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/13 15:21:20 by tsiguenz         ###   ########.fr       */
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
		const std::list<int>	cv(v.begin(), v.end());
		for (std::list<int>::iterator it = v.begin(); it != v.end(); it++) {
			std::cout << *it << std::endl;
		}
		std::cout << "easyFind(50) = " << *easyFind(cv, 50) << std::endl;
	}
	return (0);
}
