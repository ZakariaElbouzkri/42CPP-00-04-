/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:59:26 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/25 10:08:00 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Brain_HPP_
#define _Brain_HPP_

#include <iostream>

class	Brain
{

	private:
		std::string _ideas[100];
		int			_currIdx;
	public:
		Brain( void );
		~Brain( void );
		Brain( Brain const& rhs );
		Brain&	operator=( const Brain& rhs );
		void	setIdea( std::string idea );
		void	displayIdeas( void ) const;
};

#endif
