/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:16:55 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/01 23:33:59 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_damage = 30;
	std::cout << "{FragTrap} " << _name << " is created\n";
}

FragTrap::~FragTrap( void )
{
	std::cout << "{FragTrap} Destructor called\n";
}

FragTrap::FragTrap( FragTrap const& rhs ) : ClapTrap(rhs._name)
{
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_damage = rhs._damage;
	std::cout << "{FragTrap} Copy constructor called\n";
}

FragTrap&	FragTrap::operator=( const FragTrap& rhs )
{
	std::cout << "{FragTrap} Copy assignment operator called\n";
	if (this != &rhs){
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_damage = rhs._damage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	if (_hitPoints > 0){
		std::cout << "{FragTrap} " << _name << " request high fives\n";
	}
}
