/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:34:58 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/21 13:12:06 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ClapTrap_HPP_
#define _ClapTrap_HPP_

#include <iostream>

class	ClapTrap{

	protected:
		std::string _name;
		int			_hitPoints;
		int			_damage;
		int			_energyPoints;
		ClapTrap( void );
	public:
		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap( ClapTrap const& rhs );
		ClapTrap&	operator=( const ClapTrap& rhs );
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
};

#endif
