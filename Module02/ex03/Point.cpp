/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:16:58 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/09 19:04:41 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"


Point::Point() : x(Fixed()), y(Fixed()){
	// std::cout << "default constructor called\n";
}

Point::Point(const float _x, const float _y) : x(Fixed(_x)), y(Fixed(_y)){
	// std::cout << "flaot constructor called\n";
}

Point::~Point(){
	// std::cout << "destractor called\n";
}


Point::Point(Point const &rhs) : x(rhs.x), y(rhs.y){
	// std::cout << "copy constructor called\n";
}

Point	&Point::operator=(const Point &rhs){
	// std::cout << "copy assignment constructor called\n";
	if (this != &rhs){
		(Fixed) this->x = Fixed(rhs.x.toFloat());
		(Fixed) this->y = Fixed(rhs.y.toFloat());
	}
	return (*this);
}


Fixed	Point::area(Point const a, Point const b, Point const c){
	Fixed	area;

	area = ((a.x - a.y * b.y) - (a.x - c.y * a.y - b.y));
	return (Abs(area / 2));
}

Fixed	Point::Abs(const Fixed& obj){
	if (obj.getRawBits() < 0){
		return (obj * -1);
	}
	return (obj);
}

Fixed	Point::getX( void ) const {
	return (x);
}

Fixed	Point::getY( void ) const {
	return (y);
}

std::ostream&	operator<<(std::ostream& stream, const Point& rhs){
	stream << "(" << rhs.getX() << " ," << rhs.getY() << ") ";
	return (stream);
}

bool	Point::bsp(Point const a, Point const b, Point const c, Point const p){
	Fixed	abc, pac, pab, pbc;
	abc = this->area(a, b, c);
	pac = this->area(p, a, c);
	pab = this->area(p, a, b);
	pbc = this->area(p, b, c);

	std::cout << "area ABC: " << abc << "\n";
	std::cout << "area PAC+PAC+PBC: "<< (pac + pab + pbc) << "\n";
	return (abc == (pac + pab + pbc));
}
/*
	area:
		| x1-x2 x1-x3| 
		| y1-y2 y1-y3| 
		= x1-x2 * y1-y3 - x1-x3 * y1-y3
		
*/

// Fixed	Point::area(const Point& a, const Point& b, const Point& c){
// 	return (a.x * b.x - a.y  * c.y - a.x * a.x - )
// }

// bool	Point::bsp(Point const a, Point const b, Point const c, Point const point){
	
// }


/*
	calculate area of triangle:
	let triangle ABC :  A(x1, y1), B(x2, y2), C(x3, y3)
	way 1:
		triangle area:
			A = 1/2 |x1y2 + x2y3 + x3y1 - x1y3 -x2-y1 - x3y2|
	way 2:
		distance between two points 
			AB = √((x2 - x1)² + (y1 - y2)²)
		heron's formula
		A = √(S(S - A)(S - B)(S - C))
		where S is Semiperimeter
			S = 1/2(AB + BC + AC)
		proof :
			let triangle abc
			we know the area is A = (H.b)/2
			since we don't the heght H
			let b1, b2 so b1+b2 = b
			{					 	{
				h² + b1² = a² => 		h² + b1² = a²
				h2 + b2² = c² => 		h² + b2² = c²
			}					 	}
*/
