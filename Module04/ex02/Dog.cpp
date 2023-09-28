/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:28:43 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/25 11:16:10 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog( void ) : Animal("Dog")
{
	_brain = new Brain();
	std::cout << "{Dog} Default constructor called\n";
}

Dog::~Dog( void )
{
	std::cout << "{Dog} Destructor called\n";
	delete _brain;
}

Dog::Dog( Dog const& rhs )
{
	std::cout << "{Dog} Copy constructor called\n";
	if (this != &rhs)
	{
		_brain = new Brain();
		*_brain = *rhs._brain;
		_type = rhs._type;
	}
}

Dog&	Dog::operator=( const Dog& rhs )
{
	std::cout << "{Dog} Copy assignment operator called\n";
	if (this != &rhs){
		delete _brain;
		_brain = new Brain;
		*_brain = *rhs._brain;
		_type = rhs._type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const{
	std::cout << "{Dog} sound...\n";	
}
