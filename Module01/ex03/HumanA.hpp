/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:16:08 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 02:49:37 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HumanA_HPP_
#define _HumanA_HPP_

#include <iostream>
#include "Weapon.hpp"

class	HumanA{
	private:
		Weapon&		_weapon;
		std::string	_name;
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );
		void	attack( void );
};


#endif
