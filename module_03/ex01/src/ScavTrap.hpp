/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:52:46 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 12:05:24 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(void);
	ScavTrap(std::string const& name);
	ScavTrap(ScavTrap const& scavtrap);
	~ScavTrap(void);
	ScavTrap& operator=(ScavTrap const& scavtrap);
	void	attack(std::string const& target);
	void	printAttackSucces(std::string const target) const;
	void	printAttackFail(void) const;
	void	printGuardGateSucces(void) const;
	void	printGuardGateFail(void) const;
	void	guardGate(void);

private:

};

std::ostream&	operator<<(std::ostream& os, ClapTrap const&);

#endif // SCAVTRAP_HPP
