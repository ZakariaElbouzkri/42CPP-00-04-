/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:10:29 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/08 08:38:58 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : value(0){
	std::cout << "Default constructor called\n";
}


Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}


Fixed::Fixed(Fixed const &rhs){
	std::cout << "Copy constructor called\n";
	*this = rhs;
}


Fixed	&Fixed::operator=(const Fixed &rhs){
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs){
		this->value = rhs.getRawBits();
	}
	return (*this);
}


int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}


void	Fixed::setRawBits( const int raw ){
	std::cout << "getRawBits member function called\n";
	this->value = raw;
}
