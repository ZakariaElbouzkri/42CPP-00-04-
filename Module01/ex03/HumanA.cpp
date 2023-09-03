/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 07:56:38 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 08:20:46 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string nameA, Weapon& wp){
	name = nameA;
	weapon = &wp;
}

HumanA::~HumanA( void ){
}

void	HumanA::attack( void ){
	std::cout << name << " attacks with their " << (*weapon).getType() << "\n";
}

