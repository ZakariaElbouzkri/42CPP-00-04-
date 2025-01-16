/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:04:49 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/28 08:53:46 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm( const std::string& target )
	: AForm("PresidentialPardon", target, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const& rhs )
{
	*this = rhs;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs )
{
	if (this != &rhs){
		AForm::operator=(rhs);
	}
	return (*this);
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	if (executor.getGrade() >= this->getGradeRequiredToExec())
		throw GradeTooLowException();
	if (this->IsSigned() == false)
		throw FormNotSigned();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
}