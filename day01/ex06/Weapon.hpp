/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 20:37:51 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 20:37:52 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string	&getType( void );
	void				setType(std::string newType);

private:
	std::string	_type;
};

#endif
