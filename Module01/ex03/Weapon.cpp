/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:11:17 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 02:39:35 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ){
}

Weapon::Weapon( std::string type ) : _type(type){
}

Weapon::~Weapon( void ){
}

const std::string&	Weapon::getType( void ) const{
	std::string const& ref = _type;
	return (ref); 
}


void	Weapon::setType( std::string type ){
	_type = type;
}

