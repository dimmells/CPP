/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:58:25 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/22 16:58:27 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap();
	NinjaTrap(std::string newName);
	NinjaTrap(NinjaTrap const & copy);
	~NinjaTrap();

	NinjaTrap & operator=(NinjaTrap const & fg);
	void	vaulthunter_dot_exe(std::string const & target);
	void	ninjaShoebox(FragTrap & fg);
	void	ninjaShoebox(ScavTrap & sv);
	void	ninjaShoebox(NinjaTrap & na);
	
};

#endif
