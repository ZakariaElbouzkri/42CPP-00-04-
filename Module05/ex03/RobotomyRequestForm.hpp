/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:04:56 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/28 08:43:54 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RobotomyRequestForm_HPP_
#define _RobotomyRequestForm_HPP_

#include <iostream>
#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private:
		RobotomyRequestForm( void );
	public:
		RobotomyRequestForm( const std::string& target );
		~RobotomyRequestForm( void );
		RobotomyRequestForm( RobotomyRequestForm const& rhs );
		RobotomyRequestForm&	operator=( const RobotomyRequestForm& rhs );
		void	execute( Bureaucrat const & executor ) const;
};

#endif
