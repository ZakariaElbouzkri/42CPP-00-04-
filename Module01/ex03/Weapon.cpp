/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 06:59:25 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 08:13:13 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon( std::string wpType ){
	type = wpType;
}

Weapon::Weapon( void ){
}

Weapon::~Weapon( void ){
	
}

std::string	Weapon::getType( void ){
	const std::string& typeRef = type;
	return (typeRef);
}

void	Weapon::setType( std::string newType){
	type = newType;
}