/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:09:26 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 13:09:27 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony( void ) {
	return;
}

Pony::~Pony( void ) {
	return;
}

std::string	Pony::getName( void ) const {
	return this->_name;
}

int			Pony::getAge( void ) const {
	return this->_age;
}

int			Pony::getHeight( void ) const {
	return this->_height;
}

int			Pony::getWeight( void ) const {
	return this->_weight;
}

void		Pony::setName(std::string newName) {
	this->_name = newName;
}

void		Pony::setAge(int newAge) {
	this->_age = newAge;
}

void		Pony::setHeight(int newHeight) {
	this->_height = newHeight;
}

void		Pony::setWeight(int newWeight) {
	this->_weight = newWeight;
}
