/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:38:19 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 20:38:20 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name, Weapon &weapon) : _weapon(&weapon), _name(name) {
	return;
}

HumanB::HumanB(std::string name) : _name(name) {
	return;
}

HumanB::~HumanB( void ) {
	return;
}

Weapon*		HumanB::getWeapon( void ) {
	return (this->_weapon);
}

std::string	HumanB::getName( void ) {
	return (this->_name);
}

void		HumanB::setWeapon(Weapon &newWeapon) {
	this->_weapon = &newWeapon;
}

void		HumanB::setName(std::string newName) {
	this->_name = newName;
}

void		HumanB::attack( void ) {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
