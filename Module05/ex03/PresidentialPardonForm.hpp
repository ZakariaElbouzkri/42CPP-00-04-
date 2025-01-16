/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:04:51 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/28 08:53:18 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PresidentialPardonForm_HPP_
#define _PresidentialPardonForm_HPP_

#include <iostream>
#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
		PresidentialPardonForm( void );
	public:
		PresidentialPardonForm( const std::string& target );
		~PresidentialPardonForm( void );
		PresidentialPardonForm( PresidentialPardonForm const& rhs );
		PresidentialPardonForm&	operator=( const PresidentialPardonForm& rhs );
		void	execute( Bureaucrat const & executor ) const;
};

#endif
