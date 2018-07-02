/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:00:00 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/22 15:00:04 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap was born to KILL you and your coalition!!!" << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = "no_nameSc";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	_tizhAttackDamage = 50;
	_harassmentAttackDamage = 25;
	_schelbanAttackDamage = 5;
}

ScavTrap::ScavTrap(std::string newName) {
	std::cout << newName << ": ScavTrap was born to KILL you and your coalition!!!" << std::endl;
	_name = newName;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	_tizhAttackDamage = 50;
	_harassmentAttackDamage = 25;
	_schelbanAttackDamage = 5;
}

ScavTrap::ScavTrap(ScavTrap const & copy) {
	*this = copy;
}

ScavTrap::~ScavTrap() {
	std::cout << "DIE......ScavTrap will be back..." << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & fg) {
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

void	ScavTrap::challengeNewcomer() {
	std::string challenge[5] = {
		"Fight with dragon, save the princess and *** her",
		"Drink beer, don't drink vodka",
		"Put your bottle on the table, and don't take a tizh",
		"Validate Picine CPP",
		"Make a wish"
	};
	int		random;
	random = rand() % 5;
	std::cout << "--> " << _name << " you have new challenge " << challenge[random] << std::endl;
}
