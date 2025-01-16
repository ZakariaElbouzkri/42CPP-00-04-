/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:50:58 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/30 09:34:57 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	{
		try {
			Form	form("aa", 0, 11);
			std::cout << form << '\n';
		}
		catch( std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}

	
	{
		try {
			Form		form("form", 10, 12);
			Bureaucrat	b("Foo", 2);
			b.signForm( form );
		} 
		catch( std::exception& e)
		{
			std::cout << e.what() << '\n';	
		}	
	}
	return (0);
}
