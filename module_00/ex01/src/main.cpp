/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:11:26 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/13 18:50:25 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	ignoreLine(void) {

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

std::string	getFieldOfContact(std::string message) {

	std::string	str;

	if (std::cin.good() == 0)
		return (str);
	std::cout << message;
	std::getline(std::cin, str);
	if (str.empty() == 1)
		std::cout << MSG_ERR_EMPTY << std::endl;
	return (str);
}

void	add(PhoneBook& pb) {

	std::string	field[6];

	field[FIRST_NAME] = getFieldOfContact(MSG_FN);
	field[LAST_NAME] = getFieldOfContact(MSG_LN);
	field[NICK_NAME] = getFieldOfContact(MSG_NN);
	field[PHONE_NUMBER] = getFieldOfContact(MSG_PN);
	field[DARKEST_SECRET] = getFieldOfContact(MSG_DS);
	for (int i = 0; i < 5; i++)
		if (field[i].empty() == 1)
			return ;
	Contact	contact(field[FIRST_NAME],
					field[LAST_NAME],
					field[NICK_NAME],
					field[DARKEST_SECRET],
					field[PHONE_NUMBER]);
	pb.addContact(contact);
}

void	search(PhoneBook pb) {

	int	index = 0;

	if (pb.getNbContact() == 0) {
			std::cout << MSG_SEARCH_BUT_NO_CONTACT << std::endl;
			return ;
	}
	pb.printContactsResume();
	while (1) {
		std::cout << MSG_DETAIL;
		std::cin >> index;
		if (std::cin.eof() == 1)
			return ;
		if (std::cin.good() == 0 || index < 1 || index > pb.getNbContact()) {
			std::cout << MSG_ERR_BAD_FORMAT_INDEX << pb.getNbContact() << std::endl;
			std::cin.clear();
			ignoreLine();
		} else break ;
	}
	ignoreLine();
	pb.printContactByIndex(index);
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
			add(pb);
		if (str.compare("SEARCH") == 0)
			search(pb);
		if (str.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}
