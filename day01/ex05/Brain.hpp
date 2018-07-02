/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:45:10 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 18:45:13 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <sstream>
# include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	int			getIq( void ) const;
	int			getWeight( void ) const;
	void		setIq(int iq);
	void		setWeight(int weight);
	std::string	identify( void ) const;

private:
	int		_iq;
	int		_weight;
};

#endif
