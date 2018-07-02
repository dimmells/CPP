/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:22:32 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 15:22:33 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	void	randomChump();
private:
	std::string		zombieType;
	
};

#endif
