/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:06:59 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/08 15:24:37 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_H
# define TEMPLATE_H

template<typename T>
void	swap(T& a, T& b) {
	T	tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T const&	min(T const& a, T const& b) {
	return (a < b)? a : b;
}

template<typename T>
T const&	max(T const& a, T const& b) {
	return (a > b)? a : b;
}

#endif // TEMPLATE_H
