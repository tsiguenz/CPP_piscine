/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:33:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/08 19:08:37 by tsiguenz         ###   ########.fr       */
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

		Array(Array<T> const& array) { *this = array; }

		~Array() { delete [] this->array_; }

		Array&	operator=(Array<T> const& array) {
			this->size_ = array.size_;
			this->array_ = array.array_;
			return *this;
		}
		int	size() { return this->size_; }
		T&	operator[](unsigned int i) {
			if (i < 0 || i >= this->size_)
				throw std::out_of_range("Out of range\n");
			return this->array_[i];
		}

	private:
		T*				array_;
		unsigned int	size_;
};

#endif // ARRAY_HPP
