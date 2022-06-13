/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:14:46 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/06/13 15:16:38 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		typedef typename std::deque<T>::iterator	iterator;
		typedef typename std::deque<T>::const_iterator	const_iterator;
		typedef typename std::deque<T>::reverse_iterator	reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator	const_reverse_iterator;
		MutantStack(): std::stack<T>() { };
		MutantStack(MutantStack<T> const& mutantStack) { *this = mutantStack; }
		~MutantStack() { };
		MutantStack&	operator=(MutantStack<T> const& mutantStack) {
			this->c = mutantStack.c;
			return *this;
		}
		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
		reverse_iterator	rbegin() { return this->c.rbegin(); }
		reverse_iterator	rend() { return this->c.rend(); }
};

#endif // MUTANT_STACK_H
