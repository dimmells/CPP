/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:08:53 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 17:08:54 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( void ) {
	return;
}

static std::string		randomName(int i) {
	std::string	names[30]={"bad","easy","lol","Hurt","gay","code","hate",
	"kill","ice","fire","icecream","hangman","destroy","computer","book",
	"dictionary","technology","power","thunder","controller","dexterity",
	"keyboard","thunderous","blizzard","hazardous","algorithm","destruction",
	"operation","assignment","despicable"};
	Zombie		zombie;

	std::srand (time(NULL));
	return (names[(std::rand() + i) % 30]);
}

void 		ZombieHorde::announce() {
	int		i;

	i = 0;
	while (i < this->_n) {
		this->zombies[i].announce();
		i++;
	}
	return;
}

ZombieHorde::ZombieHorde(int n) {
	if (n > 0) {
		this->zombies = new Zombie[n];
		this->_n = n;
		int		i;

		i = 0;
		while (i < n) {
			this->zombies[i].setName(randomName(i));
			this->zombies[i].setType("unknown");
			i++;
		}
		this->announce();
	}
	return;
}

ZombieHorde::~ZombieHorde( void ) {
	delete [] this->zombies;
	return;
}

int			ZombieHorde::getN() const {
	return this->_n;
}

void		ZombieHorde::setN(int n) {
	this->_n = n;
}
