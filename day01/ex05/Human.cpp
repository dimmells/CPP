/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:45:46 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 18:45:48 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void ) {
	return;
}

Human::~Human( void ) {
	return;
}

const Brain			&Human::getBrain(void) {
	return (this->_brain);
}

std::string		Human::identify( void ) const {
	return (this->_brain.identify());
}
