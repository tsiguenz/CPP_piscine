/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:25:36 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/18 17:14:53 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {

	Zombie*	z1 = newZombie("toto");
	randomChump("titi");
	std::cout << "Zombies are walking..." << std::endl;
	delete z1;
	return (0);
}
