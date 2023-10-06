/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:32:43 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 07:26:14 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria( std::string const& type ) : _type(type)
{
	std::cout << "AMateria type : " << _type << " created\n";
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria type : " << _type << " destroyed\n";
}

AMateria::AMateria( AMateria const& rhs )
{
	std::cout << "AMateria created with copy constructor\n";
	_type = rhs._type;
}

AMateria&	AMateria::operator=( const AMateria& rhs )
{
	std::cout << "AMateria copy assingnment operator called\n";
	if (this != &rhs){
		_type = rhs._type;
	}
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << _type << " use " << target.getName() << '\n';
}
