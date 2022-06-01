/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:31:07 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 17:59:48 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter {
	public:
		Character(void);
		Character(std::string const& name);
		Character(Character const& character);
		virtual ~Character(void);
		Character& operator=(Character const& character);
		std::string const&	getName(void) const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

	private:
		std::string	name_;
		AMateria*	inventory_[4];
};

#endif // CHARACTER_HPP
