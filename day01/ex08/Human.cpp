/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 14:38:56 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/20 14:38:57 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void		Human::meleeAttack(std::string const & target) {
	std::cout << "Start melee attack on " << target << std::endl;
	return ;
}

void		Human::rangedAttack(std::string const & target) {
	std::cout << "Start ranged attack on " << target << std::endl;
	return ;
}

void		Human::intimidatingShout(std::string const & target) {
	std::cout << "Start intimidating attack on " << target << std::endl;
	return ;
}

void		Human::action(std::string const & action_name, std::string const & target) {
	std::string actionsNames[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

    typedef void (Human::*Functions)(std::string const & target);
    Functions functions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

    int		i = 0;
    while (i < 3) {
		if (actionsNames[i] == action_name) {
			(this->*(functions[i]))(target);
			break ;
		}
		i++;
    }
}
