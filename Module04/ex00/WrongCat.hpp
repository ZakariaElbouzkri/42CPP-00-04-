/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:00:56 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/23 09:23:02 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WrongCat_HPP_
#define _WrongCat_HPP_

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		~WrongCat( void );
		WrongCat( WrongCat const& rhs );
		WrongCat&	operator=( const WrongCat& rhs );
		void	makeSound( void ) const;
};

#endif
