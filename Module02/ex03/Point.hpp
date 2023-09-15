/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:59:13 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/14 04:39:09 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Point_HPP_
#define _Point_HPP_

#include <iostream>
#include "Fixed.hpp"

class	Point{

	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point( void );
		Point( const float x, const float y);
		~Point( void );
		Point( Point const& rhs );
		Point&	operator=( const Point& rhs );
		const Fixed&	getX( void ) const;
		const Fixed&	getY( void ) const;
};

std::ostream& operator<<(std::ostream& stream, const Point& rhs);
bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif
