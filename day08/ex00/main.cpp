/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 12:16:39 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/29 12:16:40 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int		main() {
	std::list<int>	myints;
	myints.push_back(0);
	myints.push_back(8);
	myints.push_back(1);
	myints.push_back(0);
	myints.push_back(1);
	myints.push_back(9);
	myints.push_back(9);
	myints.push_back(7);
	std::cout << easyfind(myints, 1) << std::endl;

	std::vector<int>	v(12, -1);
	std::cout << easyfind(v, 12) << std::endl;

	return (0);
}
