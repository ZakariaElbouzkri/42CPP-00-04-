/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:04:42 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/28 08:51:28 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AForm_HPP_
#define _AForm_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	private:
		const	std::string	name;
		const	int			gradeToSign;
		const	int			gradeToExec;
		bool				isSigned;

	protected:
		std::string			target;

	public:
		AForm( void );
		AForm( const std::string& name, const int& gradeToSign, const int& gradeToExec );
		AForm( const std::string& name, const std::string& target, const int& gradeToSign, const int& gradeToExec );
		~AForm( void );
		AForm( AForm const& rhs );
		AForm&	operator=( const AForm& rhs );

		const	std::string&	getName( void ) const;
		const	int&			getGradeRequiredToSign( void ) const;
		const	int&			getGradeRequiredToExec( void ) const;
		const	bool&			IsSigned( void ) const;

		void	beSigned( const Bureaucrat& bureaucrat );
		virtual void	execute( Bureaucrat const & executor ) const = 0;
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
		
		class	FormNotSigned : public std::exception
		{
			private:
				std::string	_msg;
			public:
				FormNotSigned( void ) throw();
				FormNotSigned( const std::string& msg ) throw();
				const char * what( void ) const throw();
				virtual ~FormNotSigned( void ) throw();
		};
};

std::ostream&	operator<<( std::ostream& os, const AForm& rhs );

#endif
