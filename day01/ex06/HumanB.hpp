/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:38:24 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 20:38:28 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
public:
	HumanB();
	HumanB(std::string name, Weapon &weapon);
	HumanB(std::string name);
	~HumanB();
	Weapon*		getWeapon( void );
	std::string	getName( void );
	void		setWeapon(Weapon &newWeapon);
	void		setName(std::string newName);
	void		attack( void );
private:
	Weapon*		_weapon;
	std::string	_name;
};

#endif
