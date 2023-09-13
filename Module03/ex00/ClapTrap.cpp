/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:00:44 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/11 21:30:38 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name): _name(name){
	std::cout << "Default constructor called\n";
	_energyPoints = 10;
	_attackDamage = 0;
	_hitPoints = 10;
}


ClapTrap::~ClapTrap(){
	std::cout << "the destructor called\n";
}


ClapTrap::ClapTrap(ClapTrap const &rhs){
	std::cout << "copy constructor called\n";
	if (this !=  &rhs){
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
}


ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs){
	std::cout << "copy assignment operator overload called\n";
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target){
	if (_hitPoints > 0 && _energyPoints > 0){
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target
		<< " causing " << _attackDamage << " points of damage\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints > 0 && _energyPoints > 0){
		_hitPoints -= amount;
		_energyPoints--;
		std::cout << "take damage memeber func called\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_hitPoints > 0 && _energyPoints > 0){
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " is Repaired\n";
	}
}