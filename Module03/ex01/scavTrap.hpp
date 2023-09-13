/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:40:42 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/11 21:45:33 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ScavTrap_HPP_
#define _ScavTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"


class	ScavTrap 
{
	private:
		
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap const &obj);
		ScavTrap &operator=(const ScavTrap &obj);

};



#endif
