/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:55:23 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/01 21:27:27 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_damage = 20;
	std::cout << "[ScavTrap] " << _name << " is created\n";
}

ScavTrap::~ScavTrap( void ){
	std::cout << "[ScavTrap] " << _name << " is destroyed\n";
}

ScavTrap::ScavTrap( ScavTrap const& rhs ) : ClapTrap(rhs._name){
	std::cout << "[ScavTrap] Copy constructor called\n";
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_damage = rhs._damage;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& rhs ) {
	std::cout << "[ScavTrap] Copy assignment operator called\n";
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_damage = rhs._damage;
	}
	return (*this);
}

void	ScavTrap::guardGate( void ) const{
	if (_hitPoints > 0){
		std::cout << "[ScavTrap] " << _name << " is now in Gate keeper mode\n";
	}
}

void	ScavTrap::attack( const std::string& target ){
	if (_hitPoints <= 0){
		std::cout << "ClapTrap " << _name << "is died\n";
		return ;
	}
	else if (_energyPoints <= 0){
		std::cout << "ClapTrap " << _name << "is out of energy\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _damage << " points of damage\n";
	_energyPoints -= 1;
}
