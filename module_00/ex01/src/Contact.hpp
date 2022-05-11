/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:10:33 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/11 18:59:10 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact {

	public:

	Contact(unsigned int 	index,
			std::string 	firstName,
			std::string 	lastName,
			std::string 	nickName, 
			std::string 	darkestSecret,
			std::string		phoneNumber
	);
	~Contact(void);

	int			getIndex(void) const;
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getDarkestSecret(void) const;
	std::string	getPhoneNumber(void) const;

	private:

	const unsigned int	_index;
	const std::string	_firstName;
	const std::string	_lastName;
	const std::string	_nickName;
	const std::string	_darkestSecret;
	const std::string	_phoneNumber;
	
};
#endif
