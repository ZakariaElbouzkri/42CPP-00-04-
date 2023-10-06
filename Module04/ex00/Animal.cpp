/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:17:36 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/05 22:26:37 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal( void )
{
	std::cout << "[Animal] object created with Unknown type\n";
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "[Animal] object created with type : " << _type << "\n";
}

Animal::~Animal( void )
{
	std::cout << "[Animal] object Destroyed\n";
}

Animal::Animal( Animal const& rhs )
{
	std::cout << "[Animal] Copy constructor called\n";
	*this = rhs;
}

Animal&	Animal::operator=( const Animal& rhs )
{
	std::cout << "[Animal] Copy assignment operator called\n";
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

std::string	Animal::getType( void ) const
{
	if (_type.empty())
		return ("Unknown");
	return (_type);
}

void	Animal::setType( std::string type )
{
	_type = type;
}

void	Animal::makeSound( void ) const{
	std::cout << "[Animal] Unknown sound...\n";
}
