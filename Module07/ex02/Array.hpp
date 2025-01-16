/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:29:56 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/09 06:02:24 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template<typename T>
class	Array {
	private:
		unsigned int	_size;
		T*				_buff;

	public:
		Array( void ) : _size(0), _buff(NULL) {
		};

		Array( unsigned int n ) : _size(n) {
			_buff = new	T[n];
		};

		Array( const Array<T>& rhs ) : _buff(NULL) {
			*this = rhs;
		}
		Array&	operator=( const Array<T>& rhs ) {
			if ( this == &rhs ) return *this;
			_size = rhs._size;
			delete[] _buff;
			_buff = new T[_size];
			for (unsigned int i = 0; i < rhs._size; i++) {
				_buff[i] = rhs._buff[i];
			}
			return *this;
		}
		T&	operator[]( const unsigned int& index ) {
			if ( index < _size )
				return _buff[index];
			throw	OutOfBound();
		}

		const unsigned int&	size( void ) const {
			return _size;
		}

		~Array() {
			delete[] _buff;
		}
		
		class	OutOfBound : public std::exception {
			public: const char * what( void ) const throw() {
				return "Index out range";
			}
		};
};
