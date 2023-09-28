/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:03:34 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/25 22:14:16 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Cure_HPP_
#define _Cure_HPP_

#include <iostream>
#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure( void );
		~Cure( void );
		Cure( Cure const& rhs );
		Cure&	operator=( const Cure& rhs );
		AMateria*	clone( void ) const;
		void	use(ICharacter& target);
};

#endif
