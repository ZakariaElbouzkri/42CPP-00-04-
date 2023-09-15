/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:19:20 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/14 23:42:25 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap( void ){
	std::cout << "Default constructor called\n";
}

ClapTrap::~ClapTrap( void ){
	std::cout << "Destructor called\n";
}

ClapTrap::ClapTrap( ClapTrap const& rhs ){
	std::cout << "Copy constructor called\n";
	*this = rhs;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs ){
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs){
		this->_name = rhs._name;
		
	}
	return (*this);
}
