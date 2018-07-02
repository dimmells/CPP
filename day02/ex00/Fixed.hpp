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

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const &copy);
	~Fixed();
	Fixed & operator=(Fixed const & copy);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int					_rawBits;
	static int const	_bit;
};

#endif
