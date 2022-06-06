/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/06 18:24:48 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include <stdlib.h>

int	main() {
	char const*	str = "42";
	double	d = strtod(str, 0);
	std::cout << "int = " << static_cast<int>(d) << std::endl;
	std::cout << "float = " << static_cast<float>(d) << std::endl;
	std::cout << "char = " << static_cast<char>(d) << std::endl;
	std::cout << "double = " << d << std::endl;
	return (0);
}
