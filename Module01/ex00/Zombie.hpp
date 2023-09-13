/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:36:12 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/12 22:49:47 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	_Zombie_HPP_
#define _Zombie_HPP_

#include <iostream>

class	Zombie{
	private:
		std::string _name;
		
	public:
		Zombie( std::string name );
		~Zombie();
		void	announce( void );
};

Zombie*	newZombie( std::string name );
void randomChump( std::string name );


#endif
