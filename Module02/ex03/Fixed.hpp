/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 07:53:04 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/09 18:46:55 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Fixed_HPP_
#define _Fixed_HPP_

#include <iostream>


class	Fixed
{
	private:
		int					value;
		static	const int	frac = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		Fixed(Fixed const &obj);
		Fixed&	operator=(const Fixed& rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		bool	operator>(const Fixed& rhs);
		bool	operator<(const Fixed& rhs);
		bool	operator>=(const Fixed& rhs);
		bool	operator<=(const Fixed& rhs);
		bool	operator!=(const Fixed& rhs);
		bool	operator==(const Fixed& rhs);
		Fixed	operator+(const Fixed& rhs) const;
		Fixed	operator-(const Fixed& rhs) const;
		Fixed	operator*(const Fixed& rhs) const;
		Fixed	operator/(const Fixed& rhs) const;
		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );
		static	Fixed	max(const Fixed& lhs, const Fixed& rhs);
		static	Fixed	max(Fixed& lhs, Fixed& rhs);
		static	Fixed	min(const Fixed& lhs, const Fixed& rhs);
		static	Fixed	min(Fixed& lhs, Fixed& rhs);
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& rhs);

#endif
