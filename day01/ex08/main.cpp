/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 14:39:07 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/20 14:39:08 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main() {
	Human human;

	std::string const & action_name = "meleeAttack";
	std::string const & target = "dicks";
	human.action(action_name, target);

	std::string const & action_name1 = "rangedAttack";
	std::string const & target1 = "cheaters";
	human.action(action_name1, target1);

	std::string const & action_name2 = "intimidatingShout";
	std::string const & target2 = "new students";
	human.action(action_name2, target2);

	return (0);
}
