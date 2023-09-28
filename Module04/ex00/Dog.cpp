/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:28:43 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/23 09:28:06 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "{Dog} Default constructor called\n";
}

Dog::~Dog( void )
{
	std::cout << "{Dog} Destructor called\n";
}

Dog::Dog( Dog const& rhs )
{
	std::cout << "{Dog} Copy constructor called\n";
	*this = rhs;
}

Dog&	Dog::operator=( const Dog& rhs )
{
	std::cout << "{Dog} Copy assignment operator called\n";
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const{
	std::cout << "{Dog} sound...\n";	
}
