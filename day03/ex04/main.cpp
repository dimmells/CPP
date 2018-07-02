/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:01:31 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/21 19:01:33 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main() {
	FragTrap fg("dmelnyk");

	fg.tizhAttack("BOCAL");
	srand(time(0));
	fg.takeDamage(10);
	fg.vaulthunter_dot_exe("LOOSERS");
	fg.vaulthunter_dot_exe("LOOSERS");
	fg.vaulthunter_dot_exe("LOOSERS");
	fg.vaulthunter_dot_exe("LOOSERS");
	fg.vaulthunter_dot_exe("LOOSERS");

	ScavTrap sv("bocal");

	sv.challengeNewcomer();

	NinjaTrap na("Khmelnytskyi");
	NinjaTrap na2("Bakhmatov");

	na.ninjaShoebox(fg);
	na.ninjaShoebox(sv);
	na.ninjaShoebox(na2);

	SuperTrap sr;
	
	sr.rangedAttack("UNION");
	sr.meleeAttack("EMPIRE");

	return (0);
}
