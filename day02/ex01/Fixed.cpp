/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 10:30:41 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/21 10:30:42 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nbr) {
	std::cout << "Int constructor called" << std::endl;
	_rawBits = nbr << _bit;
}

Fixed::Fixed(float const flt) {
	std::cout << "Float constructor called" << std::endl;
	_rawBits = (roundf(flt * (1 << _bit)));
}

Fixed::Fixed(Fixed const &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & fixed) {
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = fixed._rawBits;
	return (*this);
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
	return ;
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed) {
	o << fixed.toFloat();
	return (o);
}

float	Fixed::toFloat( void ) const {
	float	flt;

	flt = _rawBits;
	return (flt / (1 << _bit));
}

int		Fixed::toInt( void ) const {
	return (_rawBits >> _bit);
}

int const	Fixed::_bit = 8;
