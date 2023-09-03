/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 07:52:23 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 08:21:10 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string nameB ){
	name = nameB;
}

HumanB::~HumanB(){
}

void	HumanB::attack( void ){
	std::cout << name << " attacks with their " << (*weapon).getType() << "\n";
}

void	HumanB::setWeapon( Weapon& wp ){
	weapon = &wp;
}
