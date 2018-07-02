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
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main() {
	Bureaucrat	br("HHA", 15);
	ShrubberyCreationForm	shr("Lutsk");
	PresidentialPardonForm	pres("Cheater");
	RobotomyRequestForm		robot("Bender");

	srand(time(0));
	try
	{
		std::cout << robot;
		// br.incGrade();
		br.signForm(robot);
		br.executeForm(robot);
		// pres.execute(br);
		// shr.beSigned(br);
		std::cout << robot;
		std::cout << br << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
