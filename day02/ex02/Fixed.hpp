/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 10:30:36 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/21 10:30:37 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(int const nbr);
	Fixed(float const flt);
	Fixed(Fixed const & copy);
	~Fixed();
	Fixed & operator=(Fixed const & copy);
	Fixed	operator+(Fixed const & fix);
	Fixed	operator-(Fixed const & fix);
	Fixed	operator*(Fixed const & fix);
	Fixed	operator/(Fixed const & fix);
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);
	static Fixed const	& min(Fixed const & a, Fixed const & b);
	static Fixed		& min(Fixed & a, Fixed & b);
	static Fixed const	& max(Fixed const & a, Fixed const & b);
	static Fixed		& max(Fixed & a, Fixed & b);
	bool	operator<(Fixed const & copy);
	bool	operator>(Fixed const & copy);
	bool	operator>=(Fixed const & copy);
	bool	operator<=(Fixed const & copy);
	bool	operator==(Fixed const & copy);
	bool	operator!=(Fixed const & copy);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int					_rawBits;
	static int const	_bit;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif


