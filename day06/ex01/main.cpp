/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 15:57:29 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/27 15:57:31 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct	Data {
	std::string s1;
	int n;
	std::string s2;
}; 

void	*	serialize( void ) {
	Data	*data = new Data;
	std::string alphanum("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");

	for (int i = 0; i < 8; i++) {
		data->s1.append(sizeof(char), alphanum[rand() % 62]);
		data->s2.append(sizeof(char), alphanum[rand() % 62]);
	}
	data->n = rand() % 10;

	return (reinterpret_cast<void*>(data));
}

Data	*	deserialize( void * raw ) {
	return (reinterpret_cast<Data*>(raw));
}

int		main() {
	srand(time(0));
	void * serialized = serialize();
	Data * data = deserialize(serialized);

	std::cout << "s1 = " << data->s1 << std::endl;
	std::cout << "s2 = " << data->s2 << std::endl;
	std::cout << "int = " << data->n << std::endl;

	return (0);
}
