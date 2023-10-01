/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:56:21 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/01 23:31:07 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ScavTrap_HPP_
#define _ScavTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	private:
		// ScavTrap( void );
	public:
		ScavTrap( std::string name );
		~ScavTrap( void );
		ScavTrap( ScavTrap const& rhs );
		ScavTrap&	operator=( const ScavTrap& rhs );
		void	attack( const std::string& target );
		void	guardGate( void ) const;
};

#endif
