/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:18:06 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/06 07:16:31 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal( void );
		Animal( std::string type );
		virtual ~Animal( void );
		Animal( Animal const& rhs );
		Animal&	operator=( const Animal& rhs );
		std::string	getType( void ) const;
		void		setType( std::string type );
		virtual	void		makeSound( void ) const = 0;
};

#endif
