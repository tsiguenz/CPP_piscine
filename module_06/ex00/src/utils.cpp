/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:35:53 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/07 20:11:01 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConversion.h"

void	printNumbers(char nb) {
//	std::cout << "is char" << std::endl;
	std::cout << "char: '" << nb << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	printNumbers(int nb) {
//	std::cout << "is int" << std::endl;
	if (nb < std::numeric_limits<char>::max() && nb > std::numeric_limits<char>::min()) {
		if (std::isprint(static_cast<int>(nb)) == false)
			std::cout << "char: non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << nb << std::endl;
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	printNumbers(float nb) {
//	std::cout << "is float" << std::endl;
	if (nb < std::numeric_limits<char>::max() && nb > std::numeric_limits<char>::min()) {
		if (std::isprint(static_cast<int>(nb)) == false)
			std::cout << "char: non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	if (nb < static_cast<float>(std::numeric_limits<int>::max()) \
			&& nb > static_cast<float>(std::numeric_limits<int>::min()))
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << nb << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	printNumbers(double nb) {
//	std::cout << "is double" << std::endl;
	if (nb < std::numeric_limits<char>::max() && nb > std::numeric_limits<char>::min()) {
		if (std::isprint(static_cast<int>(nb)) == false)
			std::cout << "char: non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	if (nb < static_cast<double>(std::numeric_limits<int>::max()) \
			&& nb > static_cast<double>(std::numeric_limits<int>::min()))
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (std::isfinite(nb) \
			&& (nb > static_cast<double>(std::numeric_limits<float>::max()) \
				|| nb < static_cast<double>(std::numeric_limits<float>::min())))
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << nb << std::endl;
}

bool	isChar(std::string str) {
	return str.size() == 1 && std::isalpha(str.at(0))? true : false;
}

bool	isInt(std::string str) {
	char*	endP;
	long	l;

	if (str.find('.') < str.size())
		return false;
	l = strtol(str.c_str(), &endP, 10);
	if (endP[0] != '\0')
		return false;
	if (l <= std::numeric_limits<int>::max() && l >= std::numeric_limits<int>::min())
		return true;
	return false;
}

bool	isFloat(std::string str) {
	char*	endP;
	double	f;

	if (str == "nanf" || str == "-inff" || str == "+inff")
		return true;
	if (str.at(0) == '.' || str.find('.') > str.size() || str.find('f') > str.size())
		return false;
	f = strtof(str.c_str(), &endP);
	if (errno != 0 || endP[0] != 'f' || endP[-1] == '.')
		return false;
	return true;
}

bool	isDouble(std::string str) {
	char*	endP;

	if (str == "nan" || str == "-inf" || str == "+inf")
		return true;
	strtod(str.c_str(), &endP);
	if (str.at(0) == '.' || errno != 0 || str.find('.') > str.size() \
		|| endP[0] != '\0' || endP[-1] == '.')
		return false;
	return true;
}
