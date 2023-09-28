/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:28:57 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/22 11:52:48 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Dog_HPP_
#define _Dog_HPP_

#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog( void );
		~Dog( void );
		Dog( Dog const& rhs );
		Dog&	operator=( const Dog& rhs );
		void		makeSound( void ) const;
};

#endif
