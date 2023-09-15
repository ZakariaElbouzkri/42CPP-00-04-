/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:19:24 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/14 23:39:59 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ClapTrap_HPP_
#define _ClapTrap_HPP_

#include <iostream>

class	ClapTrap{

	private:
		std::string	_name;
		
	public:
		ClapTrap( void );
		~ClapTrap( void );
		ClapTrap( ClapTrap const& rhs );
		ClapTrap&	operator=( const ClapTrap& rhs );

};

#endif
