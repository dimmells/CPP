/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:01:27 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/21 19:01:28 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
public:
	FragTrap();
	FragTrap(std::string newName);
	FragTrap(FragTrap const & copy);
	~FragTrap();

	FragTrap & operator=(FragTrap const & fg);
	void	vaulthunter_dot_exe(std::string const & target);
	
};

#endif
