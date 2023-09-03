/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 07:03:16 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 08:21:01 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA{
	private:
		Weapon*		weapon;
		std::string name;
	public:
		HumanA(std::string nameA, Weapon& wp);
		~HumanA( void );
		void	attack( void );
};

#endif
