/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:15:44 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/07 21:10:41 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int	main() {
	Data	d1(42);
	Data*	d2;
	uintptr_t	u;
	
	u = serialize(&d1);
	d2 = deserialize(u);
	std::cout << "d1 = " << &d1 << ", val = " << d1.getVal() << std::endl;
	std::cout << "d2 = " << d2 << ", val = " << d2->getVal() << std::endl;
	return 0;
}
