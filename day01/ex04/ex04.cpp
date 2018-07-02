/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:23:27 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 18:23:28 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main( void ) {
	std::string	str = "HI THIS IS BRAIN";
	std::string *p_str = &str;
	std::string &r_str = str;

	std::cout << *p_str << std::endl;
	std::cout << r_str << std::endl;
	return (0);
}
