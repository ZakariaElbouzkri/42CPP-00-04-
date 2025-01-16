/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 02:56:05 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 11:24:59 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : index(0) {
}

Span::Span( unsigned int N ) : index(0) {
	container.resize(N, 0);
}

Span::Span( const Span& rhs ) : index(rhs.index), container(rhs.container) {
}

Span&	Span::operator=( const Span& rhs ) {
	if (this != &rhs ) {
		container = rhs.container;
		index = rhs.index;
	}
	return *this;
}

Span::~Span( void ) {
}

void	Span::addNumber( const int& number ) {
	if (index == container.size())
		throw std::runtime_error("index out of bound");
	container[index++] = number;
}

int	Span::shortestSpan( void ) {
	if (container.size() <= 1)
		throw std::runtime_error("Not enough numbers");
	int ans = INT_MAX;
	for (size_t i = 1; i < index; i++)
		ans = std::min(ans, abs(container[i] - container[i - 1]));
	return ans;
}

int	Span::longestSpan( void ) {
	if (container.size() <= 1)
		throw std::runtime_error("Not enough numbers");
	std::vector<int>	copy(container.begin(), container.begin() + index);
	std::sort(copy.begin(), copy.end());
	return copy.back() - copy[0];
}

Span::iterator	Span::begin( void ) {
	return container.begin();
}

Span::iterator	Span::end( void ) {
	return container.begin() + index;
}






