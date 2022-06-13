/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:47:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/13 15:33:37 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): tab_(), N_() {
	return ;
}

Span::Span(unsigned int const& N): tab_(), N_(N) {
	return ;
}

Span::Span(Span const& span) {
	*this = span;
	return ;
}

Span::~Span() {
	return ;
}

Span&	Span::operator=(Span const& span) {
	this->N_ = span.N_;
	return *this;
}

void	Span::addNumber(int nb) {
	if (this->tab_.size() == this->N_)
		throw std::out_of_range("Out of range");
	tab_.push_back(nb);
}

int& Span::operator[](int i) {
	return this->tab_[i];
}

int	Span::shortestSpan() {
	if (this->tab_.size() <= 1)
		throw std::length_error("Need at least two span for this function");
	int	res = -1;
	int	tmp = 0;
	VIIterator	it1 = this->tab_.begin();
	VIIterator	it2;
	VIIterator	ite = this->tab_.end();
	for (; it1 != ite; it1++) {
		it2 = it1 + 1;
		for (; it2 != this->tab_.end(); it2++) {
			tmp = abs(*it1 - *it2);
			if (res > tmp || res == -1)
				res = tmp;
		}
	}
	return (res);
}

int	Span::longestSpan() {
	if (this->tab_.size() <= 1)
		throw std::length_error("Need at least two span for this function");
	int	res = 0;
	int	tmp = 0;
	VIIterator	it1 = this->tab_.begin();
	VIIterator	it2;
	VIIterator	ite = this->tab_.end();
	for (; it1 != ite; it1++) {
		it2 = it1 + 1;
		for (; it2 != this->tab_.end(); it2++) {
			tmp = abs(*it1 - *it2);
			if (res < tmp)
				res = tmp;
		}
	}
	return (res);
}

void	Span::addRange(VIIterator begin, VIIterator end) {
	this->tab_.insert(this->tab_.end(), begin, end);
//	for (; begin != end; begin++)
//		this->addNumber(*begin);
}
