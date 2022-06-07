/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:49:32 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/07 20:54:25 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {
	return ;
}

Data::Data(int const& val): val_(val) {
	return ;
}

Data::Data(Data const& data) {
	*this = data;
	return ;
}

Data::~Data() {
	return ;
}

Data&	Data::operator=(Data const& data) {
	this->val_ = data.val_;
	return *this;
}

int	Data::getVal() const {
	return (this->val_);
}
