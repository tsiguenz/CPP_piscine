/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:11:26 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/15 22:22:45 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	ignoreLine(void) {

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int	main(void) {

	PhoneBook	pb;
	std::string	str;

	while (1)  {
		if (std::cin.good() == 0)
			return (1);
		std::cout << MSG_HELP_HOME << std::endl;
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
			pb.add();
		if (str.compare("SEARCH") == 0)
			pb.search();
		if (str.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}
