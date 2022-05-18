/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:10:47 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/18 19:26:14 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon {

public:
	Weapon(std::string type);
	~Weapon(void);

	std::string const&	getType(void) const;
	void				setType(std::string type);

private:
	std::string	type_;

};

#endif
