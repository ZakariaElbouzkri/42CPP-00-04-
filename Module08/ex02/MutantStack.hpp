/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 01:19:35 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 03:36:50 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <stack>

template<
    class T,
    class Container = std::deque<T>
>
class	MutantStack : public std::stack<T, Container> {
	
	public:
		typedef typename Container::iterator iterator;

		MutantStack( void ) : std::stack<T, Container>() { };
		MutantStack( const MutantStack& rhs ) : std::stack<T, Container>(rhs) { }
		void	operator=( const MutantStack& rhs ) { std::stack<T, Container>::operator=(rhs); }
		~MutantStack( void ) {}
		iterator	begin( void ) { return (*this).c.begin(); }
		iterator	end( void ) { return (*this).c.end(); }
};