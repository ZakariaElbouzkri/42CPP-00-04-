/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:00:53 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/23 09:27:32 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("Cat")
{
	std::cout << "[WrongCat] Default constructor called\n";
}

WrongCat::~WrongCat( void )
{
	std::cout << "[WrongCat] Destructor called\n";
}

WrongCat::WrongCat( WrongCat const& rhs )
{
	std::cout << "[WrongCat] Copy constructor called\n";
	*this = rhs;
}

WrongCat&	WrongCat::operator=( const WrongCat& rhs )
{
	std::cout << "[WrongCat] Copy assignment operator called\n";
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongCat::makeSound( void ) const{
	std::cout << "[WrongCat] sound ....\n";
}
