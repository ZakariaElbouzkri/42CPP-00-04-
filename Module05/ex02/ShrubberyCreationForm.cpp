/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:04:59 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/30 17:03:25 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#define ASCII_TREE \
    "    ^   \n" \
    "   ^^^  \n" \
    "  ^^^^^ \n" \
    " ^^^^^^^\n" \
    "^^^^^^^^^\n" \
    "    ||   \n"


ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target )
 : AForm("ShrubberyCreation", target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const& rhs )
 : AForm(rhs)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& rhs )
{
	if (this != &rhs) {
		AForm::operator=(rhs);
	}
	return (*this);
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	if (executor.getGrade() >= this->getGradeRequiredToExec())
		throw GradeTooLowException();
	if (this->IsSigned() == false)
		throw FormNotSigned();
	std::fstream	file((target + "_shrubbery").c_str(), std::ios_base::app);
	if (file.is_open())
		file << ASCII_TREE << '\n';
	else
		throw FormNotSigned("Error creating target");
	file.close();
}
