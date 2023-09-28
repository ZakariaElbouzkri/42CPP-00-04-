/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:26:02 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/23 09:37:08 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "{Cat} constructor called\n";
}

Cat::~Cat( void )
{
	std::cout << "{Cat} Destructor called\n";
}

Cat::Cat( Cat const& rhs )
{
	std::cout << "{Cat} Copy constructor called\n";
	*this = rhs;
}

Cat&	Cat::operator=( const Cat& rhs )
{
	std::cout << "{Cat} Copy assignment operator called\n";
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << "{Cat} sound...\n";
}
