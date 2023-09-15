/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:46:30 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/14 03:18:46 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed( void ) : _fixedPoit(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int num ) : _fixedPoit(num << frac) {
	std::cout << "Int constructor called\n";
}

Fixed::Fixed( const float num ) : _fixedPoit(roundf(num * (1 << frac))) {
	std::cout << "Float constructor called\n";
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
	return (_fixedPoit);
}

void Fixed::setRawBits( int const raw ){
	_fixedPoit = raw;
}

int	Fixed::toInt( void ) const{
	return (_fixedPoit >> frac);
}

float	Fixed::toFloat( void ) const{
	return (float(_fixedPoit) / (1 << frac));
}

std::ostream&	operator<<( std::ostream& stream, const Fixed& rhs ){
	stream << rhs.toFloat();
	return (stream);
}
