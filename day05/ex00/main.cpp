/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:27:31 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/25 12:27:33 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main() {
	Bureaucrat br;

	try
	{
		br.incGrade();
		std::cout << br << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
