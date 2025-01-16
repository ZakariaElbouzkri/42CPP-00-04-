/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:21:34 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 02:57:20 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class	Span {
	private:
		unsigned int		index;
		std::vector<int>	container;
	public:
		typedef	std::vector<int>::iterator	iterator;

		Span( void );
		Span( unsigned int N );
		Span( const Span& rhs );
		Span&	operator=( const Span& rhs );
		~Span();
		void	addNumber( const int& number );
	
		template <typename Iterator>
		void addNumbers(Iterator begin, Iterator end) {
			for (Iterator it = begin; it != end; it++) {
				this->addNumber( *it );
			}
		}

		int	shortestSpan( void );
		int	longestSpan( void );
		iterator	begin( void );
		iterator	end( void );
};