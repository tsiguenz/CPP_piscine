/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:09:47 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/12 18:24:23 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "myAwesomePhoneBook.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"

class PhoneBook {

	public:

	PhoneBook(void); 
    ~PhoneBook(void);
	void	addContact(Contact contact);
	void	shiftContacts(void);
	void	printContact(int index);

	private:

	Contact	contacts_[8];
	int		nbContact_;
};

#endif
