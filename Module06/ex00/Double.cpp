/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:21:50 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 01:55:20 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Double.hpp"

Double::Double( void ) : attr('\0') {
}

Double::Double( const Double& rhs ) : attr(rhs.attr) {
}

Double::Double( const std::string str ) {
	std::stringstream	ss(str.c_str());
	ss >> attr;
}

Double&	Double::operator=(const Double& rhs) {
	attr = rhs.attr;
	return *this;
}

Double::~Double() {
}

void	Double::asInt( void ) const {
	if (isnan(attr) || isinf(attr)) {
		std::cout << "int: " << "impossible" << '\n';
	} else {
		std::cout << "int: " << static_cast<int>(attr) << '\n';
	}
}

void	Double::asChar( void ) const {
	if (isnan(attr) || isinf(attr)) {
		std::cout << "char: " << "impossible" << '\n';
	} else if (!isprint(static_cast<int>(attr))) {
		std::cout << "char: " << "Non displayable" << '\n';
	} else {
		std::cout << "char: '" << static_cast<char>(attr) << "'\n";
	}
}

void	Double::asFloat( void ) const {
	std::cout << "float: " << static_cast<float>(attr) << "f\n";
}

void	Double::asDouble( void ) const {
	std::cout << "double: " << attr << '\n';
}