/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 07:53:04 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/08 08:30:33 by zel-bouz         ###   ########.fr       */
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
		Fixed	&operator=(const Fixed &rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& rhs);

#endif
