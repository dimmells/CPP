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

ScavTrap::ScavTrap(std::string newName) : _name(newName) {
	std::cout << newName << ": ScavTrap was born to KILL you and your coalition!!!" << std::endl;
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

int		ScavTrap::getHitPoints() const {
	return (_hitPoints);
}

int		ScavTrap::getMaxHitPoints() const {
	return (_maxHitPoints);
}

int		ScavTrap::getEnergyPoints() const {
	return (_energyPoints);
}

int		ScavTrap::getMaxEnergyPoints() const {
	return (_maxEnergyPoints);
}

int		ScavTrap::getLevel() const {
	return (_level);
}

std::string		ScavTrap::getName() const {
	return (_name);
}

int		ScavTrap::getMeleeAttackDamage() const {
	return (_meleeAttackDamage);
}

int		ScavTrap::getRangedAttackDamage() const {
	return (_rangedAttackDamage);
}

int		ScavTrap::getArmorDamageReduction() const {
	return (_armorDamageReduction);
}

int		ScavTrap::getTizhAttackDamage() const {
	return (_tizhAttackDamage);
}

int		ScavTrap::getHarassmentAttackDamage() const {
	return (_harassmentAttackDamage);

}

int		ScavTrap::getSchelbanAttackDamage() const {
	return ( _schelbanAttackDamage);
}

void	ScavTrap::tizhAttack(std::string const & target) {
	if (_hitPoints == 0) {
		std::cout << "hrrr..I can't do this..repair me.." << std::endl;
		return ;
	}
	if (_energyPoints >= _tizhAttackDamage){
		std::cout << "SC4G-TP " << _name << " attacks " << target
		<< " at tizh, causing " << _tizhAttackDamage << " points of damage !" << std::endl;
		_energyPoints -= _tizhAttackDamage;
	}
	else
		std::cout << "Oh sh*t I have not enought energy...repair me.." << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target) {
	if (_hitPoints == 0) {
		std::cout << "hrrr..I can't do this..repair me.." << std::endl;
		return ;
	}
	if (_energyPoints >= _rangedAttackDamage){
		std::cout << "SC4G-TP " << _name << " attacks " << target 
		<< " at range, causing " << _rangedAttackDamage << " points of damage !" << std::endl;
		_energyPoints -= _rangedAttackDamage;
	}
	else
		std::cout << "Oh sh*t I have not enought energy...repair me.." << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {
	if (_hitPoints == 0) {
		std::cout << "hrrr..I can't do this..repair me.." << std::endl;
		return ;
	}
	if (_energyPoints >= _meleeAttackDamage){
		std::cout << "SC4G-TP " << _name << " attacks " << target
		<< " at melee, causing " << _meleeAttackDamage << " points of damage !" << std::endl;
		_energyPoints -= _meleeAttackDamage;
	}
	else
		std::cout << "Oh sh*t I have not enought energy...repair me.." << std::endl;
}

void	ScavTrap::harassmentAttack(std::string const & target) {
	if (_hitPoints == 0) {
		std::cout << "hrrr..I can't do this..repair me.." << std::endl;
		return ;
	}
	if (_energyPoints >= _harassmentAttackDamage){
		std::cout << "SC4G-TP " << _name << " attacks " << target
		<< " at harassment, causing " << _harassmentAttackDamage << " points of damage !" << std::endl;
		_energyPoints -= _harassmentAttackDamage;
	}
	else
		std::cout << "Oh sh*t I have not enought energy...repair me.." << std::endl;
}

void	ScavTrap::schelbanAttack(std::string const & target) {
	if (_hitPoints == 0) {
		std::cout << "hrrr..I can't do this..repair me.." << std::endl;
		return ;
	}
	if (_energyPoints >= _schelbanAttackDamage){
		std::cout << "SC4G-TP " << _name << " attacks " << target
		<< " at schelban, causing " << _schelbanAttackDamage << " points of damage !" << std::endl;
		_energyPoints -= _schelbanAttackDamage;
	}
	else
		std::cout << "Oh sh*t I have not enought energy...repair me.." << std::endl;
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

void	ScavTrap::takeDamage(unsigned int amount) {
	if ((int)amount < _armorDamageReduction)
		amount = 0;
	else
		amount -= _armorDamageReduction;
	if (_hitPoints < (int)amount)
	{
		_hitPoints = 0;
		std::cout << "OH f**c you hit me...ZERO HP" << std::endl;
	} else {
		_hitPoints -= (int)amount;
		std::cout << "OH f**c you hit me..." << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "Wait...I'm on repairing" << std::endl;
	if (((int)amount + _hitPoints) > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints += (int)amount;
	if ((((int)amount / 2) + _energyPoints) > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	else
		_energyPoints += ((int)amount / 2);
}
