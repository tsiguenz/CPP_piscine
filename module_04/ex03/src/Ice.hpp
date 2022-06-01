/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:18:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/01 17:48:12 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(Ice const& ice);
		virtual ~Ice(void);
		Ice& operator=(Ice const& ice);
		virtual AMateria*	clone(void) const;
		virtual void	use(ICharacter& target);
};

#endif // ICE_HPP
