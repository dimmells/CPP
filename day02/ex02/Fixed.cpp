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

Fixed::Fixed() : _rawBits(0) {	return ;
}

Fixed::Fixed(int const nbr) {
	_rawBits = nbr << _bit;
}

Fixed::Fixed(float const flt) {
	_rawBits = (roundf(flt * (1 << _bit)));
}

Fixed::Fixed(Fixed const &copy) {
	*this = copy;
	return ;
}

Fixed::~Fixed() {
	return ;
}

Fixed & Fixed::operator=(Fixed const & fixed) {
	_rawBits = fixed._rawBits;
	return (*this);
}

Fixed	Fixed::operator+(Fixed const & fix) {
	Fixed	res;

	res._rawBits = _rawBits + fix._rawBits;
	return (res);
}

Fixed	Fixed::operator-(Fixed const & fix) {
	Fixed	res;

	res._rawBits = _rawBits - fix._rawBits;
	return (res);
}

Fixed	Fixed::operator*(Fixed const & fix) {
	Fixed	res = Fixed (this->toFloat() * fix.toFloat());
	return (res);
}

Fixed	Fixed::operator/(Fixed const & fix) {
	Fixed	res = Fixed (this->toFloat() / fix.toFloat());
	return (res);
}

Fixed	Fixed::operator++(int) {
	Fixed	res;

	res._rawBits = _rawBits;
	this->_rawBits++;
	return (res);
}

Fixed	Fixed::operator++() {
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	res;

	res._rawBits = _rawBits;
	this->_rawBits--;
	return (res);
}

Fixed	Fixed::operator--() {
	this->_rawBits--;
	return (*this);
}

Fixed const	& Fixed::min(Fixed const & a, Fixed const & b) {
	if (a._rawBits < b._rawBits)
		return (a);
	else
		return (b);
}

Fixed		& Fixed::min(Fixed & a, Fixed & b) {
	if (a._rawBits < b._rawBits)
		return (a);
	else
		return (b);
}

Fixed const	& Fixed::max(Fixed const & a, Fixed const & b) {
	if (a._rawBits > b._rawBits)
		return (a);
	else
		return (b);
}

Fixed		& Fixed::max(Fixed & a, Fixed & b) {
	if (a._rawBits > b._rawBits)
		return (a);
	else
		return (b);
}

bool 	Fixed::operator<(Fixed const & copy) {
	return (_rawBits < copy._rawBits);
}

bool 	Fixed::operator>(Fixed const & copy) {
	return (_rawBits > copy._rawBits);
}

bool 	Fixed::operator>=(Fixed const & copy) {
	return (_rawBits >= copy._rawBits);
}

bool 	Fixed::operator<=(Fixed const & copy) {
	return (_rawBits <= copy._rawBits);
}

bool 	Fixed::operator==(Fixed const & copy) {
	return (_rawBits == copy._rawBits);
}

bool 	Fixed::operator!=(Fixed const & copy) {
	return (_rawBits != copy._rawBits);
}

int		Fixed::getRawBits( void ) const {
	return (_rawBits);
}

void	Fixed::setRawBits( int const raw ) {
	_rawBits = raw;
	return ;
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed) {
	o << fixed.toFloat();
	return (o);
}

float	Fixed::toFloat( void ) const {
	float	flt;

	flt = getRawBits();
	return (flt / (1 << _bit));
}

int		Fixed::toInt( void ) const {
	return (_rawBits >> _bit);
}

int const	Fixed::_bit = 8;
