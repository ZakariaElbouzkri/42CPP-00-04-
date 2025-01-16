/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:25:44 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:54:50 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Float.hpp"

Float::Float( void ) : attr('\0') {
}

Float::Float( const Float& rhs ) : attr(rhs.attr) {
}

Float::Float(  std::string str ) {
	str.pop_back();
	std::stringstream	ss(str.c_str());
	ss >> attr;
}

Float&	Float::operator=(const Float& rhs) {
	attr = rhs.attr;
	return *this;
}

Float::~Float() {
}

void	Float::asInt( void ) const {
	if (isnan(attr) || isinf(attr)) {
		std::cout << "int: " << "impossible" << '\n';
	} else {
		std::cout << "int:" << static_cast<int>(attr) << '\n';
	}
}

void	Float::asChar( void ) const {
	if (isnan(attr) || isinf(attr)) {
		std::cout << "char: " << "impossible" << '\n';
	} else if (!isprint(static_cast<int>(attr))) {
		std::cout << "char: " << "Non displayable" << '\n';
	} else {
		std::cout << "char: '" << static_cast<char>(attr) << "'\n";
	}
}

void	Float::asFloat( void ) const {
	std::cout << "float: " << (attr) << "f\n";
}

void	Float::asDouble( void ) const {
	std::cout << "Float: " << static_cast<double>(attr) << '\n';
}