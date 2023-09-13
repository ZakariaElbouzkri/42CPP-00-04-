/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 08:10:29 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/08 09:13:38 by zel-bouz         ###   ########.fr       */
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
}


Fixed::Fixed(Fixed const &rhs){
	*this = rhs;
}


Fixed	&Fixed::operator=(const Fixed &rhs){
	if (this != &rhs){
		this->value = rhs.value;
	}
	return (*this);
}


int	Fixed::getRawBits( void ) const{
	return (this->value);
}


void	Fixed::setRawBits( const int raw ){
	this->value = raw;
}


/* ************************************************* */

Fixed::Fixed(const int n) : value(n << frac){
}


Fixed::Fixed(const float n) : value(std::roundf(n * (1 << frac))){
}

int	Fixed::toInt( void ) const {
	return (this->value >> frac);
}

float	Fixed::toFloat( void ) const {
	return (float(this->value) / (1 << frac));
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& rhs){
	stream << rhs.toFloat();
	return (stream);
}

/* ************************************************* */

bool	Fixed::operator>(const Fixed& rhs){
	return (this->value > rhs.value);
}

bool	Fixed::operator<(const Fixed& rhs){
	return (this->value < rhs.value);
}

bool	Fixed::operator>=(const Fixed& rhs){
	return (this->value >= rhs.value);
}

bool	Fixed::operator<=(const Fixed& rhs){
	return (this->value <= rhs.value);
}

bool	Fixed::operator!=(const Fixed& rhs){
	return (this->value != rhs.value);
}

bool	Fixed::operator==(const Fixed& rhs){
	return (this->value == rhs.value);
}

Fixed	Fixed::operator+(const Fixed& rhs){
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed& rhs){
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed& rhs){
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed& rhs){
	if (!rhs.value){
		return (Fixed());
	}
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed&   Fixed::operator++( void ) {
    ++this->value;
    return (*this);
}

Fixed   Fixed::operator++( int ) {
    Fixed fx( *this );
    fx.value = this->value++;
    return (fx);
}

Fixed& Fixed::operator--( void ) {
    --this->value;
    return (*this);
}

Fixed Fixed::operator--( int ) {
    Fixed fx( *this );
    fx.value = this->value--;
    return (fx);
}

Fixed	Fixed::max(const Fixed& lhs, const Fixed& rhs){
	if (lhs.toFloat() > rhs.toFloat()){
		return (lhs);
	}
	return (rhs);
}

Fixed	Fixed::max(Fixed& lhs, Fixed& rhs){
	if (lhs > rhs){
		return (lhs);
	}
	return (rhs);
}

Fixed	Fixed::min(const Fixed& lhs, const Fixed& rhs){
	if (lhs.toFloat() < rhs.toFloat()){
		return (lhs);
	}
	return (rhs);
}

Fixed	Fixed::min(Fixed& lhs, Fixed& rhs){
	if (lhs.toFloat() < rhs.toFloat()){
		return (lhs);
	}
	return (rhs);	
}