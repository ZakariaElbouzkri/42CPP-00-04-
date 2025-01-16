/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:08:52 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:54:37 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Char.hpp"

Char::Char( void ) : attr('\0') {
}

Char::Char( const Char& rhs ) : attr(rhs.attr) {
}

Char::Char( const std::string str ) {
	std::stringstream	ss(str.c_str());
	ss >> attr;
}

Char&	Char::operator=(const Char& rhs) {
	attr = rhs.attr;
	return *this;
}

Char::~Char() {
}

void	Char::asInt( void ) const {
	std::cout << "int: " << static_cast<int>(attr) << '\n';
}

void	Char::asChar( void ) const {
	std::cout << "char: '" << attr << "'\n";
}

void	Char::asFloat( void ) const {
	std::cout << "float: " << static_cast<float>(attr) << "f\n";
}

void	Char::asDouble( void ) const {
	std::cout << "double: " << static_cast<double>(attr) << '\n';
}
