/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:14:50 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/02/04 00:36:18 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename	T, typename Func>
void	iter(T* arr, size_t length, Func func) {
	if (!arr) return ;
	for (size_t i = 0; i < length; i++) {
		func(arr[i]);
	}
}

