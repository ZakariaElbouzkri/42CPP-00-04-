/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 05:33:36 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 05:46:18 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie{
	private:
		std::string zombieName;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );


#endif
