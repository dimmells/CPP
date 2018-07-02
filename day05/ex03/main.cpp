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
#include "Form.hpp"
#include "Intern.hpp"

int		main() {
	Bureaucrat	br("HHA", 15);
	// ShrubberyCreationForm	shr("Lutsk");
	// PresidentialPardonForm	pres("Cheater");
	// RobotomyRequestForm		robot("Bender");
	Intern						intern;
	Form*						rrf;

	rrf = intern.makeForm("robotomy request", "Bender");
	srand(time(0));
	try
	{
		std::cout << *rrf;
		// br.incGrade();
		br.signForm(*rrf);
		br.executeForm(*rrf);
		rrf->execute(br);
		rrf->beSigned(br);
		std::cout << *rrf;
		std::cout << br << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
