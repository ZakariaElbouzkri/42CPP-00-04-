/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:50:58 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/28 08:59:40 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat*	b = new Bureaucrat("foo", 10);
	AForm* form = new ShrubberyCreationForm("ss");
	std::cout << *form << '\n';
	std::cout << *b << '\n';
	std::cout << "----------------------------------------\n";
	b->execute(*form);
	std::cout << "----------------------------------------\n";
	b->signForm(*form);
	std::cout << "----------------------------------------\n";
	b->execute(*form);
	return (0);
}
