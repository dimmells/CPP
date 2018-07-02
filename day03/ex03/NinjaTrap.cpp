/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:58:21 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/22 16:58:22 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
	std::cout << "NinjaTrap was born to KILL you and your coalition!!!" << std::endl;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_name = "no_name";
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	_tizhAttackDamage = 50;
	_harassmentAttackDamage = 25;
	_schelbanAttackDamage = 5;
}

NinjaTrap::NinjaTrap(std::string newName) {
	std::cout << newName << ": NinjaTrap was born to KILL you and your coalition!!!" << std::endl;
	_name = newName;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	_tizhAttackDamage = 50;
	_harassmentAttackDamage = 25;
	_schelbanAttackDamage = 5;
}

NinjaTrap::NinjaTrap(NinjaTrap const & copy) {
	*this = copy;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "DIE......NinjaTrap will be back..." << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & fg) {
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

void	NinjaTrap::ninjaShoebox(FragTrap & fg) {
	std::cout << "Ninja: " << _name << " and Frag: " << fg.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap & sv) {
	std::cout << "Ninja: " << _name << " and Scav: " << sv.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap & na) {
	std::cout << "Ninja: " << _name << " and Ninja: " << na.getName() << std::endl;
}
