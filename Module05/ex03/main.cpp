/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:50:58 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/30 17:13:52 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try {
		Bureaucrat*	b = new Bureaucrat("foo", 150);
		AForm* form = new ShrubberyCreationForm("ss");
		std::cout << *form << '\n';
		std::cout << *b << '\n';
		std::cout << "----------------------------------------\n";
		b->execute(*form);
		std::cout << "----------------------------------------\n";
		b->signForm(*form);
		std::cout << "----------------------------------------\n";
		b->execute(*form);
		std::cout << "----------------------------------------\n";
		{
			Intern someRandomIntern;
			AForm* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			b->signForm(*rrf);
			b->execute(*rrf);
		}
		
	} catch (const std::exception & e) {
		std::cerr << e.what() << '\n';
		return 1;
	}
		
	return (0);
}
