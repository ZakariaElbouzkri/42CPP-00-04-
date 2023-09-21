/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:17:23 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/21 13:24:44 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FragTrap_HPP_
#define _FragTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class	FragTrap : public ClapTrap{

	private:
		FragTrap( void );
	public:
		FragTrap( std::string name );
		~FragTrap( void );
		FragTrap( FragTrap const& rhs );
		FragTrap&	operator=( const FragTrap& rhs );
		void	highFivesGuys( void ) const;
};


#endif
