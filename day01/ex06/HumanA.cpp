/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:38:03 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 20:38:07 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :  _weapon(weapon), _name(name) {
	return;
}

HumanA::~HumanA( void ) {
	return;
}

std::string	HumanA::getName( void ) {
	return (this->_name);
}

void		HumanA::setName(std::string newName) {
	this->_name = newName;
}

void		HumanA::attack( void ) {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
