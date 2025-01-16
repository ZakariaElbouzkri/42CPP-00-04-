/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:51:06 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/30 16:42:13 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : 
	name("DefaultBureaucrat"), grade(50)
{
	
}

Bureaucrat::Bureaucrat( const std::string& name, const int& grade ) :
	name(name), grade(grade)
{
	if ( grade < 1 )
		throw GradeTooHighException();
	else if ( grade > 150 )
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat( void )
{
}

Bureaucrat::Bureaucrat( Bureaucrat const& rhs )
	: name(rhs.name), grade(rhs.grade){
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& rhs )
{
	if (this != &rhs){
		this->grade = rhs.grade;
	}
	return (*this);
}


const int& Bureaucrat::getGrade( void ) const
{
	return grade;
}

const std::string&	Bureaucrat::getName( void ) const
{
	return name;
}

void	Bureaucrat::increment( void )
{
	if ( grade - 1 < 1 )
		throw GradeTooHighException();		
	--grade;
}

void	Bureaucrat::decrement( void )
{
	if ( grade + 1 > 150 )
		throw GradeTooLowException();
	++grade;
}

void	Bureaucrat::signForm( Form& form )
{
	try {
		form.beSigned( *this );
		std::cout << *this << " signed " << form << '\n';
	} catch ( std::exception& e)
	{
		std::cout << *this << " couldn't sign " << form << " because " << e.what() << '\n';
	}
}

/* exception classes implementation */

Bureaucrat::GradeTooHighException::GradeTooHighException( void ) throw()
	: _msg( "Grade Too High" )
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException( const std::string& msg ) throw()
	: _msg( msg )
{
}

const char * Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return _msg.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException( void ) throw()
	: _msg( "Grade Too Low" )
{	
}

Bureaucrat::GradeTooLowException::GradeTooLowException( const std::string& msg ) throw()
	: _msg( msg )
{	
}

const char * Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return _msg.c_str();
}

Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw()
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw()
{
}


std::ostream&	operator<<( std::ostream& os, const Bureaucrat& rhs )
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}

