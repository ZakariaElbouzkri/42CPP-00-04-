/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 06:08:00 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/13 06:15:11 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Harl_HPP_
#define _Harl_HPP_

#include <iostream>

class	Harl{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};

#endif
