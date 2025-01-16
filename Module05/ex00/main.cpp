/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:50:58 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/30 09:36:52 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int	main()
{
	try {
		Bureaucrat	b("Foo", 10);
		std::cout << b << '\n';
		b.increment();
		b.increment();
		b.decrement();
		std::cout << b << '\n';
	} 
	catch( std::exception& e)
	{
		std::cout << e.what() << '\n';	
	}
	return (0);
}
