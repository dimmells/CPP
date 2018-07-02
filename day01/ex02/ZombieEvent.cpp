/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:22:26 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 15:22:28 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ) {
	return;
}

ZombieEvent::~ZombieEvent( void ) {
	return;
}

void		ZombieEvent::setZombieType(std::string type) {
	this->zombieType = type;
}

Zombie*		ZombieEvent::newZombie(std::string name) {
	Zombie *zombie = new Zombie();

	zombie->setName(name);
	zombie->setType(this->zombieType);
	return (zombie);
}

void		ZombieEvent::randomChump( void ) {
	std::string	names[30]={"bad","easy","lol","Hurt","gay","code","hate",
	"kill","ice","fire","icecream","hangman","destroy","computer","book",
	"dictionary","technology","power","thunder","controller","dexterity",
	"keyboard","thunderous","blizzard","hazardous","algorithm","destruction",
	"operation","assignment","despicable"};

	std::srand (time(NULL));
	Zombie zombie = Zombie(names[std::rand() % 30], "unknown");
	zombie.announce();
}
