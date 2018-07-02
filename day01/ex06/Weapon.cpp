/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:37:47 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 20:37:48 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {
	return;
}

Weapon::Weapon(std::string type) {
	this->_type = type;
	return;
}

Weapon::~Weapon( void ) {
	return;
}
const std::string		&Weapon::getType( void ) {
	return (this->_type);
}

void					Weapon::setType(std::string newType) {
	this->_type = newType;
}
