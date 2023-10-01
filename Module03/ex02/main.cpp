/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:54:27 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/01 23:29:18 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main()
{
	{
		ClapTrap	clap("clap");
		clap.attack("Foo2");
		clap.takeDamage(5);
		clap.beRepaired(10);
		clap.takeDamage(100);		
	}
	std::cout << "=============================================\n";
	{
		ScavTrap	scav("scav");
		scav.attack("Foo1");
		scav.takeDamage(50);
		scav.beRepaired(1);
		scav.guardGate();
		scav.takeDamage(300);
		scav.beRepaired(100);
	}
	std::cout << "=============================================\n";
	{
		FragTrap	frag("frag");
		frag.attack("Foo1");
		frag.takeDamage(50);
		frag.beRepaired(1);
		frag.highFivesGuys();
		frag.takeDamage(300);
		frag.beRepaired(100);
	}
	return (0);
}
