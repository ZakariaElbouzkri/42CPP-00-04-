/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:55:23 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/21 13:12:53 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name){
	std::cout << "ScavTrap Default constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_damage = 20;
}

ScavTrap::~ScavTrap( void ){
	std::cout << "ScavTrap Destructor called\n";
}

ScavTrap::ScavTrap( ScavTrap const& rhs ){
	std::cout << "ScavTrap Copy constructor called\n";
	*this = rhs;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& rhs ){
	std::cout << "ScavTrap Copy assignment operator called\n";
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_damage = rhs._damage;
	}
	return (*this);
}

void	ScavTrap::guardGate( void ) const{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode\n";
}

void	ScavTrap::attack( const std::string& target ){
	if (_energyPoints <= 0 || _hitPoints <= 0){
		std::cout << "ScavTrap " << _name << " out of energy and hit points\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _damage << " points of damage\n"; 
	_energyPoints -= 1;	
}