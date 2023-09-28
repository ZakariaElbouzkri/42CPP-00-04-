/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:59:51 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/25 22:11:59 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( std::string const& type )
{
	std::cout << "AMateria Default constructor called\n";
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria Destructor called\n";
}

AMateria::AMateria( AMateria const& rhs )
{
	std::cout << "AMateria Copy constructor called\n";
	*this = rhs;
}

AMateria&	AMateria::operator=( const AMateria& rhs )
{
	std::cout << "AMateria Copy assignment operator called\n";
	if (this != &rhs){
		_type = rhs._type;
	}
	return (*this);
}

std::string	const& AMateria::getType() const
{
	return (_type);
}

void		AMateria::use( ICharacter& target )
{
	std::cout << "AMateria use member called\n";
}