/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:46:33 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/14 02:52:48 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Fixed_HPP_
#define _Fixed_HPP_

#include <iostream>

class	Fixed{

	private:
		int					_fixedPoit;
		static const int	frac = 8;
	public:
		Fixed( void );
		~Fixed( void );
		Fixed( Fixed const& rhs );
		Fixed&	operator=( const Fixed& rhs );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
