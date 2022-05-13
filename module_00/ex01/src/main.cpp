/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:11:26 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/13 11:54:24 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string	getFieldOfContact(std::string message) {

	std::string	str;

	std::cout << message;
	std::cin >> str;
	return (str);
}

void	add(PhoneBook *pb) {

	std::string	field[6];

	field[FIRST_NAME] = getFieldOfContact(MSG_FN);
	field[LAST_NAME] = getFieldOfContact(MSG_LN);
	field[NICK_NAME] = getFieldOfContact(MSG_NN);
	field[PHONE_NUMBER] = getFieldOfContact(MSG_PN);
	field[DARKEST_SECRET] = getFieldOfContact(MSG_DS);
	for (int i = 0; i < 5; i++) {
		if (field[i].empty() == 1) {
			std::cout << MSG_ERR_EMPTY << std::endl;
			return ;
		}
	}
	Contact	contact(field[FIRST_NAME],
					field[LAST_NAME],
					field[NICK_NAME],
					field[DARKEST_SECRET],
					field[PHONE_NUMBER]);
	pb->addContact(contact);
}

void	search(PhoneBook pb) {

	int	index;

	pb.printContactsResume();
	std::cout << "Select an index for see details : ";
	std::cin >> index;
	pb.printContactByIndex(index);
}

int	main(void) {

	PhoneBook	pb;
	std::string	str;

	while (1 && std::cin.eof() == 0) {
		std::cout << std::endl << MSG_HELP_HOME << std::endl;
		if (!(std::cin >> str))
			return (0);
		if (str.compare("ADD") == 0)
			add(&pb);
		if (str.compare("SEARCH") == 0)
			search(pb);
		if (str.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}
