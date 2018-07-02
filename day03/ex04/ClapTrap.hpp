/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:27:24 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/22 16:27:28 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string newName);
	ClapTrap(ClapTrap const & copy);
	~ClapTrap();

	ClapTrap & operator=(ClapTrap const & fg);
	void	tizhAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	harassmentAttack(std::string const & target);
	void	schelbanAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
	int		getHitPoints() const;
	int		getMaxHitPoints() const;
	int		getEnergyPoints() const;
	int		getMaxEnergyPoints() const;
	int		getLevel() const;
	std::string		getName() const;
	int		getMeleeAttackDamage() const;
	int		getRangedAttackDamage() const;
	int		getArmorDamageReduction() const;
	int		getTizhAttackDamage() const;
	int		getHarassmentAttackDamage() const;
	int		getSchelbanAttackDamage() const;

protected:
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	std::string	_name;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;
	int			_tizhAttackDamage;
	int			_harassmentAttackDamage;
	int			_schelbanAttackDamage;
	
};

#endif
