/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:17:48 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 02:29:07 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Int.hpp"

Int::Int( void ) : attr('\0') {
}

Int::Int( const Int& rhs ) : attr(rhs.attr) {
}

Int::Int( const std::string str ) {
	std::stringstream	ss(str.c_str());
	ss >> attr;
}

Int&	Int::operator=(const Int& rhs) {
	attr = rhs.attr;
	return *this;
}

Int::~Int() {
}

void	Int::asInt( void ) const {
	std::cout << "int: " << attr << '\n';
}

void	Int::asChar( void ) const {
	if (!isprint(attr))
		std::cout << "char: " << "Non displayable" << '\n';
	else
		std::cout << "char: '" << static_cast<char>(attr) << "'\n";
}

void	Int::asFloat( void ) const {
	std::cout << "float: " << static_cast<float>(attr) << "f\n";
}

void	Int::asDouble( void ) const {
	std::cout << "double: " << static_cast<double>(attr) << '\n';
}