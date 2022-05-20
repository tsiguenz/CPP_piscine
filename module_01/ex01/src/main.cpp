/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:25:36 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/19 10:07:28 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define NB_ZOMBIE_BY_HORDE 5

Zombie*	zombieHorde(int N, std::string name);

int	main(void) {
	Zombie*	horde = zombieHorde(NB_ZOMBIE_BY_HORDE, "toto");
	
	for (int i = 0; i < NB_ZOMBIE_BY_HORDE; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
