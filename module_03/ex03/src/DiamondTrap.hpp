/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:51:32 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 11:27:01 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

public:
	DiamondTrap(void);
	DiamondTrap(std::string const& name);
	DiamondTrap(DiamondTrap const& diamondtrap);
	~DiamondTrap(void);
	DiamondTrap& operator=(DiamondTrap const& diamondtrap);
	void	whoAmi(void) const;
	void	attack(std::string const& target);

private:
	std::string	name_;

};

#endif // DIAMONDTRAP_HPP
