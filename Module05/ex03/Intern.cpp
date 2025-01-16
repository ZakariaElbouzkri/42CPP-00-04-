/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:34:31 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/30 17:10:24 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#define ROBOTOMY_FORM 0
#define PRESIDENTIAL_FORM 1
#define SHRUBBERY_FORM 2

Intern::Intern( void )
{
}

Intern::~Intern( void )
{
}

Intern::Intern( Intern const& rhs )
{
	*this = rhs;
}

Intern&	Intern::operator=( const Intern& rhs )
{
	(void)rhs;
	return (*this);
}

AForm*	Intern::createRobotomyForm( const std::string& target)
{
	AForm* ans = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << *ans << '\n';
	return ans;
}
AForm*	Intern::createShrubberyForm( const std::string& target)
{
	AForm* ans = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << *ans << '\n';
	return ans;
}
AForm*	Intern::createPardonForm( const std::string& target)
{
	AForm* ans = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << *ans << '\n';
	return ans;
}

AForm*	Intern::makeForm( const std::string& formName, const std::string& formTarget )
{
	std::string	forms[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int	FormID = 0xfff;
	
	for ( size_t idx = 0; idx < (sizeof(forms) / sizeof(forms[0])); idx++ ) {
		FormID = (formName == forms[idx]) ? idx : FormID;
	}

	switch ( FormID ) {
		case ROBOTOMY_FORM: return createRobotomyForm(formTarget);
		case SHRUBBERY_FORM: return createShrubberyForm(formTarget);
		case PRESIDENTIAL_FORM:	return createPardonForm(formTarget);
	default:
		throw UnknowFormName();
	}
}

const char * Intern::UnknowFormName::what( void ) const throw() {
	return "Unknown formName";
}