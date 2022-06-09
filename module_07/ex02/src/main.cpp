/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/09 09:46:25 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main() {
	try {
		Array<char>	a;
		std::cout << a[0] << std::endl;
	} catch (std::exception& e) {
		std::cout << "Exception catch : " << e.what() << std::endl;
	}
	try {
		Array<int>	a(10);
		a[0] = 42;
		Array<int>	b(a);

		std::cout << a.size() << std::endl;
		std::cout << b.size() << std::endl;
		std::cout << a[0] << std::endl;
		std::cout << b[0] << std::endl;
		a[-1];
	}
	catch (std::exception& e) {
		std::cout << "Exception catch : " << e.what() << std::endl;
	}
	try {
		Array<float>	a(10);
		a[5] = 42.42f;
		Array<float>		b(a);

		std::cout << a.size() << std::endl;
		std::cout << b.size() << std::endl;
		std::cout << a[5] << std::endl;
		std::cout << b[5] << std::endl;
		a[-1];
	}
	catch (std::exception& e) {
		std::cout << "Exception catch : " << e.what() << std::endl;
	}
	return 0;
}
