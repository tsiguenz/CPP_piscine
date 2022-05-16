/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:08:44 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/16 18:14:01 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>

int	main(void) {

	Account	a(100);
	
	a.displayStatus();
	a.makeDeposit(500);
	a.displayStatus();
	return (0);
}
