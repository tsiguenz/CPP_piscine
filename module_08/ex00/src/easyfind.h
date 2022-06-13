/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:18:20 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/13 15:21:15 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iterator>

template <typename T>
typename T::iterator	easyFind(T& t, int i) {
	return std::find(t.begin(), t.end(), i);
}

template <typename T>
typename T::const_iterator	easyFind(T const& t, int i) {
	return std::find(t.begin(), t.end(), i);
}

#endif // EASYFIND_H
