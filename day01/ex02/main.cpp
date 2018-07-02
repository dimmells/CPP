/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:22:38 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 15:22:40 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int				main( void ) {
	ZombieEvent zombieEvent;
	Zombie *zombie = new Zombie("Ubivashka", "Mozgoed");

	zombie->announce();
	delete zombie;
	zombieEvent.setZombieType("Milaha");
	zombie = zombieEvent.newZombie("IamNew");
	zombie->announce();
	delete zombie;
	zombie = zombieEvent.newZombie("Z3");
	zombie->announce();
	zombieEvent.randomChump();
	delete zombie;
	zombieEvent.setZombieType("Karatel");
	zombie = zombieEvent.newZombie("IamKillYou");
	zombie->announce();
	delete zombie;
	return (0);
}
