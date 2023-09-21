/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:17:21 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/21 13:28:32 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


// FragTrap::FragTrap( void ){
// 	std::cout << "Default constructor called\n";
// }

FragTrap::FragTrap( std::string name) : ClapTrap(name){
	std::cout << "FragTrap Default constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_damage = 30;	
}

FragTrap::~FragTrap( void ){
	std::cout << "FragTrap Destructor called\n";
}

FragTrap::FragTrap( FragTrap const& rhs ){
	std::cout << "FragTrap Copy constructor called\n";
	*this = rhs;
}

FragTrap&	FragTrap::operator=( const FragTrap& rhs ){
	std::cout << "FragTrap Copy assignment operator called\n";
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_damage = rhs._damage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys( void ) const{
	std::cout << "Positive high Fives\n";
}
