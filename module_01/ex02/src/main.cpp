/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:44:30 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/19 10:07:17 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string		str("HI THIS IS BRAIN");
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Memory address :" << std::endl;
	std::cout << "str    = " << &str << std::endl;
	std::cout << "strPTR = " << stringPTR << std::endl;
	std::cout << "strREF = " << &stringREF << std::endl;

	std::cout << "Value :" << std::endl;
	std::cout << "str    = " << str << std::endl;
	std::cout << "strPTR = " << *stringPTR << std::endl;
	std::cout << "strREF = " << stringREF << std::endl;
	return (0);
}
