/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 21:06:48 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/22 21:06:50 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <string>
# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap();
	SuperTrap(std::string newName);
	SuperTrap(SuperTrap const & copy);
	~SuperTrap();

	SuperTrap & operator=(SuperTrap const & fg);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
};

#endif
