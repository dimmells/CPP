/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:54:02 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/28 13:54:04 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template	<typename T>
void		vyvid(T a) {
	std::cout << a << std::endl;
}

template	<typename T>
void		iter(T array[], unsigned int length, void (*f)(T)) {
	for (int i = 0; i < length; ++i)
		f(array[i]);
}

int			main() {
	int		a[4] = {1, 2, 5, 6};
	iter(a, 4, &vyvid);
	return (0);
}
