/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:16:58 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/01 23:33:18 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FragTrap_HPP_
#define _FragTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string name );
		~FragTrap( void );
		FragTrap( FragTrap const& rhs );
		FragTrap&	operator=( const FragTrap& rhs );
		void	highFivesGuys( void );
};

#endif
