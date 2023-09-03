/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 05:33:36 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 06:29:30 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie{
	private:
		static int	numberOfZombiez;
		int			zombieIdx;
		std::string zombieName;
	public:
		Zombie();
		~Zombie();
		void	announce( void );
		void	setName( std::string );
};

Zombie* zombieHorde( int N, std::string name );

#endif
