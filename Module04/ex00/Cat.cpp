/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:26:02 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 06:57:50 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "[Cat] constructor called\n";
}

Cat::~Cat( void )
{
	std::cout << "[Cat] Destructor called\n";
}

Cat::Cat( Cat const& rhs ) : Animal("Cat")
{
	(void)rhs;
	std::cout << "[Cat] Copy constructor called\n";
}

Cat&	Cat::operator=( const Cat& rhs )
{
	(void)rhs;
	std::cout << "[Cat] Copy assignment operator called\n";
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << "[Cat] sound...\n";
}
