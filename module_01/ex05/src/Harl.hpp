/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:42:21 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/20 15:17:48 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

#define NB_FCT 4

class	Harl {

public:
	typedef void (Harl::*HarlMemFct)(void);
	struct	TableOfFctPointer {
		std::string	level;
		HarlMemFct	fct;
	};

	Harl(void);
	~Harl(void);

	void	complain(std::string level);

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	TableOfFctPointer	table_[NB_FCT];
};


#endif
