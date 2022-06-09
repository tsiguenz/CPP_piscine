/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:18:20 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/09 16:44:16 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iterator>

template <typename T>
typename T::iterator	easyFind(T& t, int i) {
	return std::find(t.begin(), t.end(), i);
}
