/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 04:30:16 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/14 23:04:46 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	abs(const Fixed& num){
	if (num < 0){
		return (num * -1);
	}
	return (num);
}

Fixed calcArea(Point a, Point b, Point c) {
    // return (abs(a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
	return abs(a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point ){
	Fixed	abcArea = calcArea(a, b, c);
	Fixed	pabArea = calcArea(point, a, b);
	Fixed	pacArea = calcArea(point, a, c);
	Fixed	pbcArea = calcArea(point, b, c);

	std::cout << "Areas : " << abcArea << " " << pabArea<<"\n";
	return (abcArea == (pabArea + pacArea + pbcArea));
}
