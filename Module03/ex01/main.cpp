/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:54:27 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/01 21:37:12 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int	main()
{
	{
		ClapTrap	clap("Foo1");
		clap.attack("Foo2");
		clap.takeDamage(5);
		clap.beRepaired(10);
		clap.takeDamage(100);		
	}
	std::cout << "=============================================\n";
	{
		ScavTrap	scav("Foo2");
		scav.attack("Foo1");
		scav.takeDamage(50);
		scav.beRepaired(1);
		scav.guardGate();
		scav.takeDamage(300);
		scav.beRepaired(100);
	}
	return (0);
}
