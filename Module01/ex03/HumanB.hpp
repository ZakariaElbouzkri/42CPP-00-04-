/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 07:45:21 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 08:21:16 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB{
	private:
		Weapon*	weapon;
		std::string name;
	public:
		HumanB( std::string nameB );
		~HumanB( void );
		void	setWeapon( Weapon& wp );
		void	attack( void );
};


#endif