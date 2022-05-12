/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAwesomePhoneBook.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:12:42 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/12 17:21:44 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_AWSOME_PHONE_BOOK_H
#define MY_AWSOME_PHONE_BOOK_H

# include <iostream>

# define MSG_HELP_HOME "Type a keyword (ADD, SEARCH or EXIT) :"
# define MSG_IN "Index : " 
# define MSG_FN "First name : " 
# define MSG_LN "Last name : " 
# define MSG_NN "Nickname : " 
# define MSG_PN "Phone number : " 
# define MSG_DS "Darkest secret : " 
# define MSG_ERR_EMPTY "Field can't be empty" 

enum	e_fields {

	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	PHONE_NUMBER,
	DARKEST_SECRET
};

#endif
