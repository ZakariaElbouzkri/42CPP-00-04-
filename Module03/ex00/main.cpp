/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:50:46 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/01 21:11:05 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	{
		ClapTrap	clap("Foo");
		clap.attack("Foo2");
		clap.attack("Foo2");
		clap.attack("Foo2");
		clap.attack("Foo2");
		clap.attack("Foo2");
		clap.attack("Foo2");
		clap.attack("Foo2");
		clap.attack("Foo2");
		clap.attack("Foo2");
		clap.attack("Foo2");
		clap.attack("Foo2");
		clap.beRepaired(100);
		clap.takeDamage(9);
		clap.takeDamage(100);
	}
	return (0);
}
