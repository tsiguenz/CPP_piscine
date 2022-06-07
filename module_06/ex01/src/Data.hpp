/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:49:31 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/07 20:54:37 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data {
	public:
		Data();
		Data(int const& val);
		Data(Data const& data);
		virtual ~Data();
		Data& operator=(Data const& data);
		int	getVal(void) const;

	private:
		int	val_;
	};

#endif // DATA_HPP
