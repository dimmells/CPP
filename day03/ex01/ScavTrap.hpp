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

class ScavTrap
{
public:
	ScavTrap();
	ScavTrap(std::string newName);
	ScavTrap(ScavTrap const & copy);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & fg);
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

private:
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
