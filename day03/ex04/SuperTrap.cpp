/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 21:06:43 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/22 21:06:45 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() {
	std::cout << "SuperTrap was born to KILL you and your coalition!!!" << std::endl;
	_hitPoints = FragTrap::getHitPoints();
	_maxHitPoints = FragTrap::getMaxHitPoints();
	_energyPoints = NinjaTrap::getEnergyPoints();
	_maxEnergyPoints = NinjaTrap::getMaxEnergyPoints();
	_level = 1;
	_name = "no_name";
	_meleeAttackDamage = NinjaTrap::getMeleeAttackDamage();
	_rangedAttackDamage = FragTrap::getRangedAttackDamage();
	_armorDamageReduction = FragTrap::getArmorDamageReduction();
	_tizhAttackDamage = FragTrap::getTizhAttackDamage();
	_harassmentAttackDamage = FragTrap::getHarassmentAttackDamage();
	_schelbanAttackDamage = FragTrap::getSchelbanAttackDamage();
}

SuperTrap::SuperTrap(std::string newName) {
	std::cout << newName << ": SuperTrap was born to KILL you and your coalition!!!" << std::endl;
	_hitPoints = FragTrap::getHitPoints();
	_maxHitPoints = FragTrap::getMaxHitPoints();
	_energyPoints = NinjaTrap::getEnergyPoints();
	_maxEnergyPoints = NinjaTrap::getMaxEnergyPoints();
	_level = 1;
	_name = newName;
	_meleeAttackDamage = NinjaTrap::getMeleeAttackDamage();
	_rangedAttackDamage = FragTrap::getRangedAttackDamage();
	_armorDamageReduction = FragTrap::getArmorDamageReduction();
	_tizhAttackDamage = FragTrap::getTizhAttackDamage();
	_harassmentAttackDamage = FragTrap::getHarassmentAttackDamage();
	_schelbanAttackDamage = FragTrap::getSchelbanAttackDamage();
}

SuperTrap::SuperTrap(SuperTrap const & copy) {
	*this = copy;
}

SuperTrap::~SuperTrap() {
	std::cout << "DIE......SuperTrap will be back..." << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & fg) {
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

void	SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}
