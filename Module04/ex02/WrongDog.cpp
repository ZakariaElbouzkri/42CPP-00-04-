/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:02:22 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/05 22:29:47 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"


WrongDog::WrongDog( void ) : WrongAnimal("Dog")
{
	std::cout << "{WrongDog} Default constructor called\n";
}

WrongDog::~WrongDog( void )
{
	std::cout << "{WrongDog} Destructor called\n";
}

WrongDog::WrongDog( WrongDog const& rhs )
{
	std::cout << "{WrongDog} Copy constructor called\n";
	*this = rhs;
}

WrongDog&	WrongDog::operator=( const WrongDog& rhs )
{
	std::cout << "{WrongDog} Copy assignment operator called\n";
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongDog::makeSound( void ) const{
	std::cout << "{WrongDog}, sound ....\n";
}
