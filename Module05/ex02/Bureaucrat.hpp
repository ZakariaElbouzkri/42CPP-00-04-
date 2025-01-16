/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:51:03 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/28 08:40:21 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Bureaucrat_HPP_
#define _Bureaucrat_HPP_

#include <iostream>
#include <exception>
#include "AForm.hpp"

class	AForm;
class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat( void );
		Bureaucrat( const std::string& name, const int& grade );
		~Bureaucrat( void );
		Bureaucrat( Bureaucrat const& rhs );
		Bureaucrat&	operator=( const Bureaucrat& rhs );
		
		
		const int&			getGrade( void ) const;
		const std::string&	getName( void ) const;
		void				increment( void );
		void				decrement( void );

		void	signForm( AForm& form );
		void	execute( AForm const& form );
					/* exception classes */

		class	GradeTooHighException : public std::exception
		{
			private:
				std::string	_msg;
			public:
				GradeTooHighException( void ) throw();
				GradeTooHighException( const std::string& msg ) throw();
				const char * what( void ) const throw();
				virtual	~GradeTooHighException( void ) throw();
		};
		

		class	GradeTooLowException : public std::exception
		{
			private:
				std::string	_msg;
			public:
				GradeTooLowException( void ) throw();
				GradeTooLowException( const std::string& msg ) throw();
				const char * what( void ) const throw();
				virtual	~GradeTooLowException( void ) throw();
		};
};

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& rhs );

#endif
