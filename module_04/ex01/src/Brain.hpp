/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:51:32 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/31 18:27:21 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

public:
	Brain(void);
	Brain(Brain const& brain);
	virtual ~Brain(void);
	Brain& operator=(Brain const& brain);
	std::string	getIdea(int index) const;
	void	setIdea(int index, std::string const& idea);

private:
	std::string	ideas_[100];

};

#endif // BRAIN_HPP
