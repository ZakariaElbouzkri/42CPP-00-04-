/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:34:36 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/21 13:07:01 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ){
	
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10),
	_damage(0), _energyPoints(10) {
	std::cout << "ClapTrap Default constructor called\n";
}

ClapTrap::~ClapTrap( void ){
	std::cout << "ClapTrap Destructor called\n";
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
	if (_energyPoints <= 0 || _hitPoints <= 0){
		std::cout << "ClapTrap " << _name << " out of energy and hit points\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _damage << " points of damage\n"; 
	_energyPoints -= 1;
}

void	ClapTrap::beRepaired( unsigned int amount ){
	if (_energyPoints <= 0 || _hitPoints <= 0){
		std::cout << "ClapTrap " << _name << " out of energy and hit points\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " Repairs hit self, taking " << amount << "of hit points\n";
	_hitPoints += amount;
}

void	ClapTrap::takeDamage( unsigned int amount ){
	if (_hitPoints <= 0){
		std::cout << "ClapTrap " << _name << " is died\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " is taking damage, causing it to lose " << amount << " of hit points";
	_hitPoints -= amount; 
}