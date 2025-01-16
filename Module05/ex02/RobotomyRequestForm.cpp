/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:04:54 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/30 16:55:07 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( const std::string& target )
	: AForm("RobotomyRequest", target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& rhs )
	: AForm(rhs)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& rhs )
{
	if (this != &rhs){
		AForm::operator=(rhs);
	}
	return (*this);
}


void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	std::srand(std::time(0));

	if (executor.getGrade() >= this->getGradeRequiredToExec())
		throw GradeTooLowException();
	if (this->IsSigned() == false)
		throw FormNotSigned();

	std::cout << "...\n...\n...." << '\n';
	static unsigned	long turns = rand();
	if (turns++ & 1)  {
		std::cout << target << " has been robotomized successfully" << '\n';
	}
	else
		std::cout << target << " robotomy failed" << '\n';
}

