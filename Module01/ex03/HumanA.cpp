/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:19:12 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 02:48:27 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _weapon(weapon), _name(name){
}

HumanA::~HumanA( void ){
}

void	HumanA::attack( void ){
	std::string	type = _weapon.getType();
	std::cout << _name << " attacks with their " << type << "\n";
}
