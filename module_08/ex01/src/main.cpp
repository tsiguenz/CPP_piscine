/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/13 15:36:40 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include "Span.hpp"

int	main() {
	std::cout << "---------- Subject tests : ----------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "----------  1 element tests : ----------" << std::endl;
	try {
		Span	span1(10);

		span1.addNumber(42);
		std::cout << span1[0] << std::endl;
		std::cout << span1.shortestSpan() << std::endl;
		std::cout << span1.longestSpan() << std::endl;
		span1.addNumber(1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------  Range of iterator tests : ----------" << std::endl;
	try {
		Span	sp(5);
		std::vector<int>	v;

		v.push_back(6);
		v.push_back(3);
		v.push_back(17);
		v.push_back(9);
		v.push_back(11);
		sp.addRange(v.begin(), v.end());
		for (int i = 0; i < 5; i++)
			std::cout << sp[i] << std::endl;
		sp.addRange(v.begin(), v.end());
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "---------- 10 000 elements tests : ----------" << std::endl;
	try {
		Span	span1(10000);

		for (int i = 0; i < 10000; i++)
			span1.addNumber(i);
		std::cout << span1[3] << std::endl;
		std::cout << span1.shortestSpan() << std::endl;
		std::cout << span1.longestSpan() << std::endl;
		span1.addNumber(1);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
