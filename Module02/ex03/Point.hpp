/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:16:11 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/09 18:56:26 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Point_HPP_
#define _Point_HPP_

#include "Fixed.hpp"
#include <iostream>
#include <fstream>


class	Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point();
		Point(const float _x, const float _y);
		~Point();
		Point(Point const &obj);
		Point	&operator=(const Point &obj);
		bool	bsp(Point const a, Point const b, Point const c, Point const p);
		Fixed	area(Point const a, Point const b, Point const c);
		static Fixed	Abs(const Fixed& obj);
		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
};

std::ostream&	operator<<(std::ostream& stream, const Point& rhs);


#endif
