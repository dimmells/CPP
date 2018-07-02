/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:27:18 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/22 16:27:20 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap was born to KILL you and your coalition!!!" << std::endl;
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

ClapTrap::ClapTrap(std::string newName) : _name(newName) {
	std::cout << newName << ": ClapTrap was born to KILL you and your coalition!!!" << std::endl;
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

ClapTrap::ClapTrap(ClapTrap const & copy) {
	*this = copy;
}

ClapTrap::~ClapTrap() {
	std::cout << "DIE......ClapTrap will be back..." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & fg) {
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

int		ClapTrap::getHitPoints() const {
	return (_hitPoints);
}

int		ClapTrap::getMaxHitPoints() const {
	return (_maxHitPoints);
}

int		ClapTrap::getEnergyPoints() const {
	return (_energyPoints);
}

int		ClapTrap::getMaxEnergyPoints() const {
	return (_maxEnergyPoints);
}

int		ClapTrap::getLevel() const {
	return (_level);
}

std::string		ClapTrap::getName() const {
	return (_name);
}

int		ClapTrap::getMeleeAttackDamage() const {
	return (_meleeAttackDamage);
}

int		ClapTrap::getRangedAttackDamage() const {
	return (_rangedAttackDamage);
}

int		ClapTrap::getArmorDamageReduction() const {
	return (_armorDamageReduction);
}

int		ClapTrap::getTizhAttackDamage() const {
	return (_tizhAttackDamage);
}

int		ClapTrap::getHarassmentAttackDamage() const {
	return (_harassmentAttackDamage);

}

int		ClapTrap::getSchelbanAttackDamage() const {
	return ( _schelbanAttackDamage);
}

void	ClapTrap::tizhAttack(std::string const & target) {
	if (_hitPoints == 0) {
		std::cout << "hrrr..I can't do this..repair me.." << std::endl;
		return ;
	}
	if (_energyPoints >= _tizhAttackDamage){
		std::cout << "FR4G-TP " << _name << " attacks " << target
		<< " at tizh, causing " << _tizhAttackDamage << " points of damage !" << std::endl;
		_energyPoints -= _tizhAttackDamage;
	}
	else
		std::cout << "Oh sh*t I have not enought energy...repair me.." << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target) {
	if (_hitPoints == 0) {
		std::cout << "hrrr..I can't do this..repair me.." << std::endl;
		return ;
	}
	if (_energyPoints >= _rangedAttackDamage){
		std::cout << "FR4G-TP " << _name << " attacks " << target 
		<< " at range, causing " << _rangedAttackDamage << " points of damage !" << std::endl;
		_energyPoints -= _rangedAttackDamage;
	}
	else
		std::cout << "Oh sh*t I have not enought energy...repair me.." << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) {
	if (_hitPoints == 0) {
		std::cout << "hrrr..I can't do this..repair me.." << std::endl;
		return ;
	}
	if (_energyPoints >= _meleeAttackDamage){
		std::cout << "FR4G-TP " << _name << " attacks " << target
		<< " at melee, causing " << _meleeAttackDamage << " points of damage !" << std::endl;
		_energyPoints -= _meleeAttackDamage;
	}
	else
		std::cout << "Oh sh*t I have not enought energy...repair me.." << std::endl;
}

void	ClapTrap::harassmentAttack(std::string const & target) {
	if (_hitPoints == 0) {
		std::cout << "hrrr..I can't do this..repair me.." << std::endl;
		return ;
	}
	if (_energyPoints >= _harassmentAttackDamage){
		std::cout << "FR4G-TP " << _name << " attacks " << target
		<< " at harassment, causing " << _harassmentAttackDamage << " points of damage !" << std::endl;
		_energyPoints -= _harassmentAttackDamage;
	}
	else
		std::cout << "Oh sh*t I have not enought energy...repair me.." << std::endl;
}

void	ClapTrap::schelbanAttack(std::string const & target) {
	if (_hitPoints == 0) {
		std::cout << "hrrr..I can't do this..repair me.." << std::endl;
		return ;
	}
	if (_energyPoints >= _schelbanAttackDamage){
		std::cout << "FR4G-TP " << _name << " attacks " << target
		<< " at schelban, causing " << _schelbanAttackDamage << " points of damage !" << std::endl;
		_energyPoints -= _schelbanAttackDamage;
	}
	else
		std::cout << "Oh sh*t I have not enought energy...repair me.." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount < _armorDamageReduction)
		amount = 0;
	else
		amount -= _armorDamageReduction;
	if (_hitPoints < (int)amount)
	{
		_hitPoints = 0;
		std::cout << "OH f**c you hit me...ZERO HP" << std::endl;
	} else {
		_hitPoints -= amount;
		std::cout << "OH f**c you hit me..." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "Wait...I'm on repairing" << std::endl;
	if (((int)amount + _hitPoints) > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints += amount;
	if ((((int)amount / 2) + _energyPoints) > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	else
		_energyPoints += (amount / 2);
}
