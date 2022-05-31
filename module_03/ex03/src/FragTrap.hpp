/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:18:35 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 11:22:11 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

public:
	FragTrap(void);
	FragTrap(std::string const& name);
	FragTrap(FragTrap const& fragtrap);
	~FragTrap(void);
	FragTrap& operator=(FragTrap const& fragtrap);
	void	attack(std::string const& target);
	void	printAttackSucces(std::string const target) const;
	void	printAttackFail(void) const;
	void	highFivesGuys(void);
	void	setDefaultHitPoint(void);
	void	setDefaultAttackDamage(void);

private:

};

#endif // FRAGTRAP_HPP
