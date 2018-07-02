/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:22:13 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 15:22:15 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	return;
}

Zombie::Zombie(std::string name) {
	this->_name = name;
	return;
}

Zombie::Zombie(std::string name, std::string type) {
	this->_name = name;
	this->_type = type;
	return;
}

Zombie::~Zombie( void ) {
	return;
}

std::string		Zombie::getName( void ) const {
	return this->_name;
}

std::string		Zombie::getType( void ) const {
	return this->_type;
}

void			Zombie::setName(std::string newName) {
	this->_name = newName;
}

void			Zombie::setType(std::string newType) {
	this->_type = newType;
}

void			Zombie::announce( void ) {
	std::cout << "<" << this->_name << " (" << this->_type
	<< ")> Braiiiiiiinnnssss..." << std::endl;
}
