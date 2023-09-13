/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:55:58 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/11 20:59:52 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ClapTrap_HPP_
#define _ClapTrap_HPP_

#include <iostream>

class	ClapTrap
{
	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &obj);
		ClapTrap	&operator=(const ClapTrap &obj);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};



#endif
