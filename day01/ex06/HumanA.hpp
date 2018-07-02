/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:38:11 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 20:38:12 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
public:
	HumanA();
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	std::string	getName( void );
	void		setName(std::string newName);
	void		attack( void );
private:
	Weapon&		_weapon;
	std::string	_name;
};

#endif
