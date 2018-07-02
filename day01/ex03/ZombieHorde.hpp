/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:09:00 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 17:09:01 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde();
	ZombieHorde(int n);
	~ZombieHorde();
	Zombie	*getZombies() const;
	int		getN() const;
	void	setZombies(Zombie *zombies);
	void	setN(int n);
	void	announce();
	Zombie	*zombies;

private:
	int		_n;
};

#endif
