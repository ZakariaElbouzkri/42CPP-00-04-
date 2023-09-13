/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:12:09 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 07:27:18 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap( void ) : _hitPoints(10),
	_energyPoints(10), _attackDamage(0){
		std::cout << "The default constructor called\n";
}

ClapTrap::ClapTrap( std::string name ) : _name(name),
	_hitPoints(10), _energyPoints(10), _attackDamage(0){
		std::cout << "The name constructor called\n";
}


ClapTrap::~ClapTrap( void ){
	std::cout << "The destructor called\n";
}


ClapTrap::ClapTrap( ClapTrap const &rhs ) : _name(rhs._name), _hitPoints(rhs._hitPoints),
	_energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage){
		std::cout << "the copy constructor called\n";
}


ClapTrap	&ClapTrap::operator=( const ClapTrap &rhs ){
	std::cout << "the copy asignment operator overload called\n";
	if (this != &rhs){
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
}


