/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:59:09 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/14 22:51:55 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point( void ) : _x(0), _y(0){
	// std::cout << "Default constructor called\n";
}

Point::Point( const float x, const float y) : _x(x), _y(y) {
}

Point::~Point( void ){
	// std::cout << "Destructor called\n";
}

Point::Point( Point const& rhs ) : _x(rhs._x), _y(rhs._y){
	// std::cout << "Copy constructor called\n";
}

Point&	Point::operator=( const Point& rhs ){
	// std::cout << "Copy assignment operator called\n";
	if (this != &rhs){
		((Fixed) this->_x).setRawBits(rhs._x.getRawBits());
		((Fixed) this->_y).setRawBits(rhs._y.getRawBits());
	}
	return (*this);
}

const Fixed&	Point::getX( void ) const{
	return _x;
}

const Fixed&	Point::getY( void ) const{
	return _y;
}

std::ostream& operator<<(std::ostream& stream, const Point& rhs){
	stream << "(" << rhs.getX() << ", " << rhs.getY() << ")\n";
	return (stream);
}
