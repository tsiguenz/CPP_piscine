/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:33:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/09 09:43:02 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array {
	public:
		Array(): array_(), size_() { }

		Array(unsigned int size): size_(size) { this->array_ = new T[size]; }

		Array(Array<T> const& array): array_(), size_(0) { *this = array; }

		~Array() { delete [] this->array_; }

		Array&	operator=(Array<T> const& array) {
			delete [] this->array_;
			this->array_ = new T[array.size_];
			this->size_ = array.size_;
			for (unsigned int i = 0; i < array.size_; i++)
				this->array_[i] = array.getElement(i);
			return *this;
		}

		int	size() { return this->size_; }

		T&	operator[](unsigned int i) {
			if (i < 0 || i >= this->size_)
				throw std::out_of_range("Out of range");
			return this->array_[i];
		}

	private:
		T*				array_;
		unsigned int	size_;

		T	getElement(unsigned int i) const {
			return this->array_[i];
		}
};

#endif // ARRAY_HPP
