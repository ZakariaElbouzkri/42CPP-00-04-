#ifndef _Form_HPP_
#define _Form_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const	std::string	name;
		const	int			gradeToSign;
		const	int			gradeToExec;
		bool				isSigned;
		
	public:
		Form( void );
		Form( const std::string& name, const int& gradeToSign, const int& gradeToExec );
		~Form( void );
		Form( Form const& rhs );
		Form&	operator=( const Form& rhs );

		const	std::string&	getName( void ) const;
		const	int&			getGradeRequiredToSign( void ) const;
		const	int&			getGradeRequiredToExec( void ) const;
		const	bool&			IsSigned( void ) const;

		void	beSigned( const Bureaucrat& bureaucrat );

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

std::ostream&	operator<<( std::ostream& os, const Form& rhs );

#endif
