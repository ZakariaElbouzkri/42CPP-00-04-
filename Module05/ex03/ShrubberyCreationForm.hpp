/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:05:02 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/28 09:04:35 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ShrubberyCreationForm_HPP_
#define _ShrubberyCreationForm_HPP_

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm( void );
	public:
		ShrubberyCreationForm( const std::string& target );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( ShrubberyCreationForm const& rhs );
		ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& rhs );
		void	execute( Bureaucrat const & executor ) const;
};

#endif
