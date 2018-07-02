/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:09:36 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 13:09:46 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

static void		ponyOnTheHeap( void ) {
	Pony *pony = new Pony();
	
	std::cout << "Ya rodilsya)))" << std::endl;
	delete pony;
	std::cout << "A teper vmer(((" << std::endl;
}

static void		ponyOnTheStack( void ) {
	Pony pony;
	
	std::cout << "I Ya rodilsya)))" << std::endl;
	std::cout << "A teper to}|{e vmer(((" << std::endl;
}

int		main( void ) {
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
