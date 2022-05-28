/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:00:55 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/28 17:41:05 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	p1("toto");

	std::cout << "p1 = " << p1 << std::endl;
	p1.guardGate();
	p1.highFivesGuys();
	p1.attack("tata");
	p1.takeDamage(50);
	p1.beRepaired(20);
	p1.takeDamage(70);
	p1.guardGate();
	p1.highFivesGuys();
	std::cout << "p1 = " << p1 << std::endl;
	p1.attack("tata");
	p1.takeDamage(50);
	p1.beRepaired(20);
	p1.guardGate();
	p1.highFivesGuys();
	p1.whoAmi();
	return (0);
}
