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

class FragTrap
{
public:
	FragTrap();
	FragTrap(std::string newName);
	FragTrap(FragTrap const & copy);
	~FragTrap();

	FragTrap & operator=(FragTrap const & fg);
	void	tizhAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	harassmentAttack(std::string const & target);
	void	schelbanAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
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
