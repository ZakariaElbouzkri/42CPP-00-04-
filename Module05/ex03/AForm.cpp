/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:04:40 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/28 08:30:52 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm( void )
	: name("DefaultAForm"), gradeToSign(10), gradeToExec(10), isSigned(false)
{
}

AForm::AForm( const std::string& name, const int& gradeToSign, const int& gradeToExec )
	: name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec), isSigned(false)
{
	if ( gradeToExec < 1 || gradeToSign < 1 )
		throw GradeTooHighException();
	else if ( gradeToExec > 150 || gradeToSign > 150 )
		throw GradeTooLowException();
}

AForm::AForm( const std::string& name, const std::string& target, const int& gradeToSign, 
	const int& gradeToExec )
	: name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec), isSigned(false), target(target)
{
	if ( gradeToExec < 1 || gradeToSign < 1 )
		throw GradeTooHighException();
	else if ( gradeToExec > 150 || gradeToSign > 150 )
		throw GradeTooLowException();
}

AForm::~AForm( void )
{
}

AForm::AForm( AForm const& rhs )
	: name(rhs.name), gradeToSign(rhs.gradeToSign), gradeToExec(rhs.gradeToExec),
	isSigned(false), target(rhs.target)
{
}

AForm&	AForm::operator=( const AForm& rhs )
{
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs){
		const_cast<std::string&>(this->name) = rhs.name;
		const_cast<int&>(this->gradeToExec) = rhs.gradeToExec;
		const_cast<int&>(this->gradeToSign) = rhs.gradeToSign;
		this->target = rhs.target;
		this->isSigned = rhs.isSigned;
	}
	return (*this);
}

const	std::string&	AForm::getName( void ) const
{
	return name;
}

const	int&	AForm::getGradeRequiredToExec( void ) const
{
	return gradeToExec;
}

const	int&	AForm::getGradeRequiredToSign( void ) const
{
	return gradeToSign;
}

const	bool&	AForm::IsSigned( void ) const
{
	return	isSigned;
}

void	AForm::beSigned( const Bureaucrat& bureaucrat )
{
	if ( bureaucrat.getGrade() >= gradeToSign )
		throw GradeTooLowException();
	isSigned = true;
}

/* exception classes implementation */

AForm::GradeTooHighException::GradeTooHighException( void ) throw()
	: _msg( "Grade Too High" )
{
}

AForm::GradeTooHighException::GradeTooHighException( const std::string& msg ) throw()
	: _msg( msg )
{
}

const char * AForm::GradeTooHighException::what( void ) const throw()
{
	return _msg.c_str();
}

AForm::GradeTooLowException::GradeTooLowException( void ) throw()
	: _msg( "Grade Too Low" )
{	
}

AForm::GradeTooLowException::GradeTooLowException( const std::string& msg ) throw()
	: _msg( msg )
{	
}

const char * AForm::GradeTooLowException::what( void ) const throw()
{
	return _msg.c_str();
}

AForm::GradeTooLowException::~GradeTooLowException( void ) throw()
{
}

AForm::GradeTooHighException::~GradeTooHighException( void ) throw()
{
}

AForm::FormNotSigned::FormNotSigned( void ) throw()
 : _msg( "form not signed ") {
}

AForm::FormNotSigned::FormNotSigned( const std::string& msg ) throw()
 : _msg( msg ){
}

const char * AForm::FormNotSigned::what( void ) const throw()
{
	return _msg.c_str();
}

AForm::FormNotSigned::~FormNotSigned( void ) throw()
{
}

std::ostream&	operator<<( std::ostream& os, const AForm& rhs )
{
	os << rhs.getName() << ", AForm " << "grade required to sign " << rhs.getGradeRequiredToSign();
	os << " grade required to execute " << rhs.getGradeRequiredToExec();
	os << std::boolalpha << " is signed : " << rhs.IsSigned();
	return os;
}

