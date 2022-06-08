/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:06:59 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/08 17:38:23 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_H
# define TEMPLATE_H

template<typename T>
void	iter(T* array, size_t const& len, void (&fct)(T&)) {
	for (size_t i = 0; i < len; i++)
		fct(array[i]);
}

template<typename T>
void	iter(T* array, size_t const& len, void (&fct)(T const&)) {
	for (size_t i = 0; i < len; i++)
		fct(array[i]);
}

template<typename T>
void	setToZero(T& t) {
	t = 0;
}

#endif // TEMPLATE_H
