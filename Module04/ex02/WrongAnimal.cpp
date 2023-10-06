/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:57:14 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/05 22:27:29 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal( void )
{
	std::cout << "{WrongAnimal} created with Unknown type\n";
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "{WrongAnimal} created with type " << _type << "\n";
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "{WrongAnimal} Destructor called\n";
}

WrongAnimal::WrongAnimal( WrongAnimal const& rhs )
{
	std::cout << "{WrongAnimal} Copy constructor called\n";
	*this = rhs;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& rhs )
{
	std::cout << "{WrongAnimal} Copy assignment operator called\n";
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

std::string		WrongAnimal::getType( void ) const
{
	if (_type.empty())
		return ("Unknown");
	return (_type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "{WrongAnimal}, Unknown Sound....\n";
}
