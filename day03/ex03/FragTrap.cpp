/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:01:22 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/21 19:01:23 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap was born to KILL you and your coalition!!!" << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "no_name";
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_tizhAttackDamage = 50;
	_harassmentAttackDamage = 25;
	_schelbanAttackDamage = 5;
}

FragTrap::FragTrap(std::string newName) {
	std::cout << newName << ": FragTrap was born to KILL you and your coalition!!!" << std::endl;
	_name = newName;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_tizhAttackDamage = 50;
	_harassmentAttackDamage = 25;
	_schelbanAttackDamage = 5;
}

FragTrap::FragTrap(FragTrap const & copy) {
	*this = copy;
}

FragTrap::~FragTrap() {
	std::cout << "DIE......FragTrap will be back..." << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & fg) {
	std::cout << "Assignation operator called" << std::endl;
	_hitPoints = fg.getHitPoints();
	_maxHitPoints = fg.getMaxHitPoints();
	_energyPoints = fg.getEnergyPoints();
	_maxEnergyPoints = fg.getMaxEnergyPoints();
	_level = fg.getLevel();
	_name = fg.getName();
	_meleeAttackDamage = fg.getMeleeAttackDamage();
	_rangedAttackDamage = fg.getRangedAttackDamage();
	_armorDamageReduction = fg.getArmorDamageReduction();
	_tizhAttackDamage = fg.getTizhAttackDamage();
	_harassmentAttackDamage = fg.getHarassmentAttackDamage();
	_schelbanAttackDamage = fg.getSchelbanAttackDamage();
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (_energyPoints >= 25)
		_energyPoints -= 25;
	else {
		std::cout << "I have not enought energy" << std::endl;
		return ;
	}
	int	energy[5] = {50, 20, 30, 25, 5};
	typedef void (FragTrap::*Functions)(std::string const & target);
    Functions functions[5] = {&FragTrap::tizhAttack,
    	&FragTrap::rangedAttack, &FragTrap::meleeAttack, &FragTrap::harassmentAttack, &FragTrap::schelbanAttack};
	int		random = rand() % 5;
	_energyPoints += energy[random];
	(this->*(functions[random]))(target);
}
