/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:19:03 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/10/05 01:28:58 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Ice_HPP_
#define _Ice_HPP_

#include <iostream>
#include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice( void );
		~Ice( void );
		Ice( Ice const& rhs );
		Ice&	operator=( const Ice& rhs );
		Ice*	clone() const;
		void	use(ICharacter& target);
};

#endif
