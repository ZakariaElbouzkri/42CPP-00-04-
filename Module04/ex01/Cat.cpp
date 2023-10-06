/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:26:02 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 06:52:00 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void ) : Animal("Cat")
{
	_brn = new Brain();
	std::cout << "[Cat] constructor called\n";
}

Cat::~Cat( void )
{
	delete _brn;
	std::cout << "[Cat] Destructor called\n";
}

Cat::Cat( Cat const& rhs ) : Animal("Cat")
{
	std::cout << "[Cat] copy constructor is called\n";
	_brn = new Brain(*rhs._brn);
}

Cat&	Cat::operator=( const Cat& rhs )
{
	std::cout << "[Cat] Copy assignment operator called\n";
	if (this != &rhs){
		delete _brn;
		_brn = new Brain(*rhs._brn);
	}
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << "[Cat] sound...\n";
}
