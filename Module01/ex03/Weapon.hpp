/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 06:54:56 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/01 08:10:00 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

class	Weapon{
	private:
		std::string	type;
	public:
		Weapon( std::string wpType );
		Weapon( void );
		~Weapon( void );
		std::string	getType( void );
		void		setType( std::string newType );
};

#endif