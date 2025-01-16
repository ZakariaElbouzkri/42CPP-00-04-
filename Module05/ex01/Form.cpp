#include "Form.hpp"


Form::Form( void )
	: name("DefaultForm"), gradeToSign(10), gradeToExec(10), isSigned(false)
{
}

Form::Form( const std::string& name, const int& gradeToSign, const int& gradeToExec )
	: name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec), isSigned(false)
{
	if ( gradeToExec < 1 || gradeToSign < 1 )
		throw GradeTooHighException();
	else if ( gradeToExec > 150 || gradeToSign > 150 )
		throw GradeTooLowException();
}

Form::~Form( void )
{
}

Form::Form( Form const& rhs )
	: name(rhs.name), gradeToSign(rhs.gradeToSign), gradeToExec(rhs.gradeToExec),
	isSigned(false)
{
}

Form&	Form::operator=( const Form& rhs )
{
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs){
		this->isSigned = rhs.isSigned;
	}
	return (*this);
}

const	std::string&	Form::getName( void ) const
{
	return name;
}

const	int&	Form::getGradeRequiredToExec( void ) const
{
	return gradeToExec;
}

const	int&	Form::getGradeRequiredToSign( void ) const
{
	return gradeToSign;
}

const	bool&	Form::IsSigned( void ) const
{
	return	isSigned;
}

void	Form::beSigned( const Bureaucrat& bureaucrat )
{
	if ( bureaucrat.getGrade() >= gradeToSign )
		throw GradeTooLowException();
	isSigned = true;
}

/* exception classes implementation */

Form::GradeTooHighException::GradeTooHighException( void ) throw()
	: _msg( "Grade Too High" )
{
}

Form::GradeTooHighException::GradeTooHighException( const std::string& msg ) throw()
	: _msg( msg )
{
}

const char * Form::GradeTooHighException::what( void ) const throw()
{
	return _msg.c_str();
}

Form::GradeTooLowException::GradeTooLowException( void ) throw()
	: _msg( "Grade Too Low" )
{	
}

Form::GradeTooLowException::GradeTooLowException( const std::string& msg ) throw()
	: _msg( msg )
{	
}

const char * Form::GradeTooLowException::what( void ) const throw()
{
	return _msg.c_str();
}

Form::GradeTooLowException::~GradeTooLowException( void ) throw()
{
}

Form::GradeTooHighException::~GradeTooHighException( void ) throw()
{
}

std::ostream&	operator<<( std::ostream& os, const Form& rhs )
{
	os << rhs.getName() << ", Form " << "grade required to sign " << rhs.getGradeRequiredToSign();
	os << " grade required to execute " << rhs.getGradeRequiredToExec();
	os << std::boolalpha << " is signed : " << rhs.IsSigned();
	return os;
}
