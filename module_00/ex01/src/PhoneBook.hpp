/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:09:47 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/13 19:05:55 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "myAwesomePhoneBook.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"
#define NB_CONTACT_MAX 1

class PhoneBook {

	public:

	PhoneBook(void); 
    ~PhoneBook(void);
	int			getNbContact(void);
	void		addContact(Contact contact);
	void		shiftContacts(void);
	void		printContactByIndex(int index) const;
	void		printContactsResume(void);
	std::string	getFieldFormatedForResume(std::string str) const;

	private:

	Contact	contacts_[NB_CONTACT_MAX];
	int		nbContact_;
};

#endif
