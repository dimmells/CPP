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

int		main() {
	FragTrap fg;

	// fg.tizhAttack("BOCAL");
	srand(time(0));
	fg.takeDamage(200);
	fg.vaulthunter_dot_exe("LOOSERS");
	fg.vaulthunter_dot_exe("LOOSERS");
	fg.vaulthunter_dot_exe("LOOSERS");
	fg.vaulthunter_dot_exe("LOOSERS");
	fg.vaulthunter_dot_exe("LOOSERS");
	return (0);
}
