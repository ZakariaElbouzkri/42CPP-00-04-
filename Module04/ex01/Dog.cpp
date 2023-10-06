/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:28:43 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 06:55:48 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog( void ) : Animal("Dog")
{
	_brn = new Brain();
	std::cout << "[Dog] Default constructor called\n";
}

Dog::~Dog( void )
{
	delete _brn;
	std::cout << "[Dog] Destructor called\n";
}

Dog::Dog( Dog const& rhs ) : Animal("Dog")
{
	std::cout << "[Dog] Copy constructor called\n";
	_brn = new Brain(*rhs._brn);
}

Dog&	Dog::operator=( const Dog& rhs )
{
	std::cout << "[Dog] Copy assignment operator called\n";
	if (this != &rhs){
		delete _brn;
		_brn = new Brain(*rhs._brn);
	}
	return (*this);
}

void	Dog::makeSound( void ) const{
	std::cout << "[Dog] sound...\n";
}
