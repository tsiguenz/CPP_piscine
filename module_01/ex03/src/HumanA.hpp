/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:34:42 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/18 23:15:09 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA {

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void	attack(void) const;

private:
	std::string const	name_;
	Weapon&				weapon_;

};

#endif
