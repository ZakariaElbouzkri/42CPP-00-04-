/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:34:36 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/01 21:36:30 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10),
	_damage(0), _energyPoints(10) {
	std::cout << "ClapTrap " << _name << " is Created\n";
}

ClapTrap::~ClapTrap( void ){
	std::cout << "ClapTrap " << _name << " is Destroyed\n";
}

ClapTrap::ClapTrap( ClapTrap const& rhs ){
	*this = rhs;
	std::cout << "ClapTrap Copy constructor called\n";
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs ){
	std::cout << "ClapTrap Copy assignment operator called\n";
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_damage = rhs._damage;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string& target ){
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

void	ClapTrap::beRepaired( unsigned int amount ){
	if (_hitPoints <= 0){
		std::cout << "ClapTrap " << _name << " is died\n";
		return ;
	}
	if (_energyPoints <= 0){
		std::cout << "ClapTrap " << _name << " is out of energy\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " Repairs him self, taking " << amount << " points of hit points\n";
	_hitPoints += amount;
	_energyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount ){
	_hitPoints -= amount;
	if (_hitPoints <= 0){
		std::cout << "ClapTrap " << _name << " is died\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " is taking damage, causing it to lose " << amount << " of hit points\n";
}
