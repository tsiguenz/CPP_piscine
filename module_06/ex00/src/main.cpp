/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:47:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/07 20:11:37 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConversion.h"

void	scalarConversion(std::string str) {
	if (str.empty() == true)
		return ;
	std::cout << "------------------------------" << std::endl;
	std::cout << "DEBUG str = [" << str << "]" << std::endl;
	if (isChar(str))
		printNumbers(str.at(0));
	else if (isInt(str))
		printNumbers(static_cast<int>(strtol(str.c_str(), NULL, 10)));
	else if (isFloat(str))
		printNumbers(strtof(str.c_str(), NULL));
	else if (isDouble(str))
		printNumbers(strtod(str.c_str(), NULL));
	else
		std::cerr << "Bad argument" << std::endl;
}

//int	main(int ac, char **av) {
//	if (ac != 2) {
//		std::cerr << "Bad number of arguments" << std::endl;
//		return (1);
//	}
//	scalarConversion(av[1]);
//	return (0);
//}

int	main() {
	std::cout << "########## char conversion : ##########" << std::endl;
	scalarConversion("t");
	scalarConversion("Z");
	std::cout << "########## int conversion : ##########" << std::endl;
	scalarConversion("0");
	scalarConversion("42");
	scalarConversion("-42");
	scalarConversion("2147483647");
	scalarConversion("-2147483648");
	std::cout << "########## float conversion : ##########" << std::endl;
	scalarConversion("42.42f");
	scalarConversion("42.0f");
	scalarConversion("-42.0f");
	scalarConversion("9223372036854775807.0f");
	scalarConversion("-2147483649");
	scalarConversion("-inff");
	scalarConversion("+inff");
	scalarConversion("nanf");
	std::cout << "########## double conversion : ##########" << std::endl;
	scalarConversion("42.42");
	scalarConversion("42.0");
	scalarConversion("-42.0");
	scalarConversion("9223372036854775808.0");
	scalarConversion("10000000000000000000000000000000000000000.0");
	scalarConversion("-inf");
	scalarConversion("+inf");
	scalarConversion("nan");
	std::cout << "########## bad conversion : ##########" << std::endl;
	scalarConversion("");
	scalarConversion(" ");
	scalarConversion("#");
	scalarConversion("asdfdas");
	scalarConversion("42.");
	scalarConversion("42.f");
	scalarConversion("42f");
	scalarConversion("2147483648");
	scalarConversion("-2147483649");
	scalarConversion("inf");
	scalarConversion("nan    ");
	scalarConversion("10000000000000000000000000000000000000000.0f");
	errno = 0;
	scalarConversion("1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111.0");
	return (0);
}
