/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:27:21 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/22 11:53:29 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat( void );
		~Cat( void );
		Cat( Cat const& rhs );
		Cat&	operator=( const Cat& rhs );
		void		makeSound( void ) const;
};

#endif
