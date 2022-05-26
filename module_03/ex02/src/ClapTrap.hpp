/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:00:14 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/26 15:36:02 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

public:
	ClapTrap(void);
	ClapTrap(ClapTrap const& claptrap);
	~ClapTrap(void);
	ClapTrap& operator=(ClapTrap const& claptrap);
	ClapTrap(std::string const& name);
	std::string	getName(void) const;
	int			getHitPoint(void) const;
	int			getEnergyPoint(void) const;
	int			getAttackDamage(void) const;
	void		setName(std::string name);
	void		setHitPoint(int hitPoint);
	void		setEnergyPoint(int energyPoint);
	void		setAttackDamage(int attackDamage);
	void		attack(std::string const& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		printAttackSucces(std::string const target) const;
	void		printAttackFail(void) const;
	void		printTakeDamageSucces(unsigned int const amount) const;
	void		printTakeDamageFail(void) const;
	void		printRepairedSucces(unsigned int const amount) const;
	void		printRepairedFail(void) const;

private:
	std::string	name_;
	int			hitPoint_;
	int			energyPoint_;
	int			attackDamage_;

};

#endif // CLAPTRAP_HPP
