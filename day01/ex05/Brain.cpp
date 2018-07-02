/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:45:05 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 18:45:06 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	this->_iq = 100;
	this->_weight = 2000;
	return;
}

Brain::~Brain( void ) {
	return;
}

int			Brain::getIq( void ) const {
	return this->_iq;
}

int			Brain::getWeight( void ) const {
	return this->_weight;
}

void		Brain::setIq(int iq) {
	this->_iq = iq;
}

void		Brain::setWeight(int weight) {
	this->_weight = weight;
}

std::string	Brain::identify( void ) const {
	std::stringstream ss;
	ss << this; 
	return (ss.str());
}
