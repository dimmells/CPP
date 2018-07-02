/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:00:08 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/22 15:00:09 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string newName);
	ScavTrap(ScavTrap const & copy);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & fg);
	void	challengeNewcomer();
	
};

#endif
