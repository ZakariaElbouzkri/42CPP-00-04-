/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:46:33 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/14 03:41:46 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Fixed_HPP_
#define _Fixed_HPP_

#include <iostream>
#include <fstream>

class	Fixed{

	private:
		int					_fixedPoit;
		static const int	frac = 8;
	public:
		Fixed( void );
		Fixed( const int num );
		Fixed( const float num );
		~Fixed( void );
		Fixed( Fixed const& rhs );
		Fixed&	operator=( const Fixed& rhs );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		bool	operator<( const Fixed& rhs ) const;
		bool	operator<=( const Fixed& rhs ) const;
		bool	operator>( const Fixed& rhs ) const;
		bool	operator>=( const Fixed& rhs ) const;
		bool	operator==( const Fixed& rhs ) const;
		bool	operator!=( const Fixed& rhs ) const;
		Fixed	operator+( const Fixed& rhs ) const;
		Fixed	operator-( const Fixed& rhs ) const;
		Fixed	operator/( const Fixed& rhs ) const;
		Fixed	operator*( const Fixed& rhs ) const;
		Fixed&	operator++( void );
		Fixed	operator++( int ) const;
		Fixed&	operator--( void );
		Fixed	operator--( int ) const;
		static	const Fixed&	min(const Fixed& a, const Fixed& b);
		static	Fixed&	min(Fixed& a, Fixed& b);
		static	const Fixed&	max(const Fixed& a, const Fixed& b);
		static	Fixed&	max(Fixed& a, Fixed& b);
		
};

std::ostream&	operator<<( std::ostream& stream, const Fixed& rhs );

#endif
