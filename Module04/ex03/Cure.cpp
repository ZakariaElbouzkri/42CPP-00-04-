/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:18:56 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 07:33:30 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure created\n";
}

Cure::~Cure( void )
{
	std::cout << "Cure destroyed\n";
}

Cure::Cure( Cure const& rhs ) : AMateria("cure")
{
	(void)rhs;
	std::cout << "Cure created with copy constructor\n";
}

Cure&	Cure::operator=( const Cure& rhs )
{
	(void)rhs;
	std::cout << "Cure copied with copy operator\n";
	return (*this);
}

Cure*	Cure::clone() const 
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
