/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:46:30 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/14 03:00:12 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed( void ) : _fixedPoit(0){
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called\n";
}

Fixed::Fixed( Fixed const& rhs ){
	std::cout << "Copy constructor called\n";
	*this = rhs;
}

Fixed&	Fixed::operator=( const Fixed& rhs ){
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs){
		this->_fixedPoit = rhs.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return (_fixedPoit);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called\n";
	_fixedPoit = raw;
}

