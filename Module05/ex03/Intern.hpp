/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:34:33 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/30 17:09:27 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Intern_HPP_
#define _Intern_HPP_

#include <iostream>
#include <sstream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern( void );
		~Intern( void );
		Intern( Intern const& rhs );
		Intern&	operator=( const Intern& rhs );
		AForm*	makeForm( const std::string& formName, const std::string& formTarget ) ;

		class	UnknowFormName : public std::exception {
			const char * what( void ) const throw();
		};
	private:
		AForm*	createRobotomyForm( const std::string& target);
		AForm*	createShrubberyForm( const std::string& target);
		AForm*	createPardonForm( const std::string& target);
};


#endif
