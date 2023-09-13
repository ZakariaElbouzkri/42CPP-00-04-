/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:39:59 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 01:53:00 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_Zombie_HPP_
#define _Zombie_HPP_

#include <iostream>

class	Zombie{
	private:
		std::string	_name;
	public:
		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
		void	setName( std::string name );
		void	announce( void );
};

Zombie*	zombieHorde( int N, std::string name );
#endif
