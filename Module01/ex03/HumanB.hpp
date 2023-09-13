/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:16:08 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 02:49:30 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HumanB_HPP_
#define _HumanB_HPP_

#include <iostream>
#include "Weapon.hpp"

class	HumanB{
	private:
		Weapon		*_weapon;
		std::string	_name;
	public:
		HumanB( std::string name );
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon& weapon );
};


#endif
