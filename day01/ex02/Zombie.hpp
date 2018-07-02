/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:22:19 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 15:22:21 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	Zombie(std::string name, std::string type);
	~Zombie();
	std::string		getName( void ) const;
	std::string		getType( void ) const;
	void			setName(std::string newName);
	void			setType(std::string newType);
	void			announce( void );

private:
	std::string		_name;
	std::string		_type;
};

#endif
