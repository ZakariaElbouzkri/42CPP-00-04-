/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:19:05 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/05 03:55:40 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMateria_HPP_
#define _AMateria_HPP_

#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	protected:
		std::string _type;
	public:
		AMateria( std::string const& type );
	
		virtual ~AMateria( void );
		AMateria( AMateria const& rhs );
		AMateria&	operator=( const AMateria& rhs );

		std::string const&	getType() const;
		virtual	AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
