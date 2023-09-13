/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:19:12 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 02:50:23 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name){

}

HumanB::~HumanB( void ){

}

void	HumanB::attack( void ){
	std::string	type = _weapon->getType();
	std::cout << _name << " attacks with their " << type << "\n";
}

void	HumanB::setWeapon( Weapon& weapon ){
	_weapon = &weapon;
}
