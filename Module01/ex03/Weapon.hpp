/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 02:08:00 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 02:40:02 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Weapon_HPP_
#define _Weapon_HPP_

#include <iostream>

class	Weapon{
	private:
		std::string	_type;
	public:
		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );
		const std::string&	getType( void ) const;
		void	setType( std::string type );
};



#endif


