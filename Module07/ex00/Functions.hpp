/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:09:45 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/03 23:15:07 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void	swap(T&	a, T& b) {
	T	temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T&	min(const T& a, const T& b) {
	return a < b ? a : b;
}

template<typename T>
const T&	max(const T& a, const T& b) {
	return a > b ? a : b;
}
