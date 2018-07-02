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

FragTrap::FragTrap(std::string newName) : _name(newName) {
	std::cout << newName << ": FragTrap was born to KILL you and your coalition!!!" << std::endl;
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

int		FragTrap::getHitPoints() const {
	return (_hitPoints);
}

int		FragTrap::getMaxHitPoints() const {
	return (_maxHitPoints);
}

int		FragTrap::getEnergyPoints() const {
	return (_energyPoints);
}

int		FragTrap::getMaxEnergyPoints() const {
	return (_maxEnergyPoints);
}

int		FragTrap::getLevel() const {
	return (_level);
}

std::string		FragTrap::getName() const {
	return (_name);
}

int		FragTrap::getMeleeAttackDamage() const {
	return (_meleeAttackDamage);
}

int		FragTrap::getRangedAttackDamage() const {
	return (_rangedAttackDamage);
}

int		FragTrap::getArmorDamageReduction() const {
	return (_armorDamageReduction);
}

int		FragTrap::getTizhAttackDamage() const {
	return (_tizhAttackDamage);
}

int		FragTrap::getHarassmentAttackDamage() const {
	return (_harassmentAttackDamage);

}

int		FragTrap::getSchelbanAttackDamage() const {
	return ( _schelbanAttackDamage);
}

void	FragTrap::tizhAttack(std::string const & target) {
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

void	FragTrap::rangedAttack(std::string const & target) {
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

void	FragTrap::meleeAttack(std::string const & target) {
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

void	FragTrap::harassmentAttack(std::string const & target) {
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

void	FragTrap::schelbanAttack(std::string const & target) {
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

void	FragTrap::takeDamage(unsigned int amount) {
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

void	FragTrap::beRepaired(unsigned int amount) {
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
